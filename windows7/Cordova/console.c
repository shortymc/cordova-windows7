// Copyright 2012 Intel Corporation
//
// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
// 
//    http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "console.h"
#include "common.h"
#include "json.h"

static HANDLE console_stdout;
static BOOL console_is_open = FALSE;

static HRESULT console_log_level(BSTR callback_id, BSTR args)
{
	HRESULT res = S_OK;
	JsonArray array;
	JsonItem item;
	wchar_t *level;
	wchar_t *msg;

	// Validate array contents
	if (!json_parse_and_validate_args(args, &array, JSON_VALUE_STRING,
											JSON_VALUE_STRING,
											JSON_VALUE_INVALID)) {
		res = E_FAIL;
		goto out;
	}

	item = json_array_get_first(array);
	level = json_get_string_value(item);
	item = json_array_get_next(item);
	msg = json_get_string_value(item);

	if (!console_is_open) {
		console_is_open = TRUE;
#ifdef _DEBUG
		// open new window for debug build
		AllocConsole();
		SetConsoleTitle(L"Debug Console");
		console_stdout = GetStdHandle(STD_OUTPUT_HANDLE);
#else
		// use existing console for release build (only visible when started from command prompt)
		AttachConsole(ATTACH_PARENT_PROCESS);
		console_stdout = GetStdHandle(STD_OUTPUT_HANDLE);
		WriteConsole(console_stdout, L"\r\n", 2, NULL, NULL);
#endif
	}
	if (wcscmp(level, L"LOG")) {
		WriteConsole(console_stdout, L"[", 1, NULL, NULL);
		WriteConsole(console_stdout, level, wcslen(level), NULL, NULL);
		WriteConsole(console_stdout, L"] ", 2, NULL, NULL);
	}
	WriteConsole(console_stdout, msg, wcslen(msg), NULL, NULL);
	WriteConsole(console_stdout, L"\r\n", 2, NULL, NULL);

	free(level);
	free(msg);

out:
	json_free_args(array);

	return res;
}


// Module
// ---------------------------------------------------------------------------

static HRESULT console_module_exec(BSTR callback_id, BSTR action, BSTR args, VARIANT *result)
{
	if (!wcscmp(action, L"logLevel"))
			return console_log_level(callback_id, args);

	return DISP_E_MEMBERNOTFOUND;
}

static void console_module_close(void)
{
	if (console_is_open) {
		FreeConsole();
	}
}

DEFINE_CORDOVA_MODULE(Console, L"Console", console_module_exec, NULL, console_module_close)