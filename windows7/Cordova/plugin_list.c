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

#include <windows.h>
#include "common.h"
#include "shell.h"

#ifdef CORDOVA_DEVICE_ENABLED
# include "device.h"
#endif
#if defined(CORDOVA_CAMERA_ENABLED) || defined(CORDOVA_CAPTURE_ENABLED)
# include "capture.h"
#endif
#ifdef CORDOVA_ACCELEROMETER_ENABLED
# include "accel.h"
#endif
#ifdef CORDOVA_NETWORKSTATUS_ENABLED
# include "network.h"
#endif
#ifdef CORDOVA_NOTIFICATION_ENABLED
# include "notification.h"
#endif
#ifdef CORDOVA_STORAGE_ENABLED
# include "storage.h"
#endif
#ifdef CORDOVA_PLATFORM_ENABLED
# include "platform.h"
#endif
#ifdef CORDOVA_FILE_ENABLED
# include "file.h"
#endif
#ifdef CORDOVA_FILETRANSFER_ENABLED
# include "filetransfer.h"
#endif
#ifdef CORDOVA_COMPASS_ENABLED
# include "compass.h"
#endif
#ifdef CORDOVA_CONSOLE_ENABLED
# include "console.h"
#endif


//-------------------------------------------------------------------------------------------------
void register_cordova_modules()
{
#ifdef CORDOVA_DEVICE_ENABLED
	register_cordova_module(CORDOVA_MODULE(Device));
#endif
#ifdef CORDOVA_CAMERA_ENABLED
	register_cordova_module(CORDOVA_MODULE(Camera));
#endif
#ifdef CORDOVA_CAPTURE_ENABLED
	register_cordova_module(CORDOVA_MODULE(Capture));
#endif
#ifdef CORDOVA_ACCELEROMETER_ENABLED
	register_cordova_module(CORDOVA_MODULE(Accelerometer));
#endif
#ifdef CORDOVA_NETWORKSTATUS_ENABLED
	register_cordova_module(CORDOVA_MODULE(Network));
#endif
#ifdef CORDOVA_NOTIFICATION_ENABLED
	register_cordova_module(CORDOVA_MODULE(Notification));
#endif
#ifdef CORDOVA_STORAGE_ENABLED
	register_cordova_module(CORDOVA_MODULE(Storage));
#endif
#ifdef CORDOVA_PLATFORM_ENABLED
	register_cordova_module(CORDOVA_MODULE(Platform));
#endif
#ifdef CORDOVA_FILE_ENABLED
	register_cordova_module(CORDOVA_MODULE(File));
#endif
#ifdef CORDOVA_FILETRANSFER_ENABLED
	register_cordova_module(CORDOVA_MODULE(FileTransfer));
#endif
#ifdef CORDOVA_COMPASS_ENABLED
	register_cordova_module(CORDOVA_MODULE(Compass));
#endif
#ifdef CORDOVA_CONSOLE_ENABLED
	register_cordova_module(CORDOVA_MODULE(Console));
#endif
}


void close_cordova_modules()
{
#ifdef CORDOVA_DEVICE_ENABLED
	close_cordova_module(CORDOVA_MODULE(Device));
#endif
#ifdef CORDOVA_CAMERA_ENABLED
	close_cordova_module(CORDOVA_MODULE(Camera));
#endif
#ifdef CORDOVA_CAPTURE_ENABLED
	close_cordova_module(CORDOVA_MODULE(Capture));
#endif
#ifdef CORDOVA_ACCELEROMETER_ENABLED
	close_cordova_module(CORDOVA_MODULE(Accelerometer));
#endif
#ifdef CORDOVA_NETWORKSTATUS_ENABLED
	close_cordova_module(CORDOVA_MODULE(Network));
#endif
#ifdef CORDOVA_NOTIFICATION_ENABLED
	close_cordova_module(CORDOVA_MODULE(Notification));
#endif
#ifdef CORDOVA_STORAGE_ENABLED
	close_cordova_module(CORDOVA_MODULE(Storage));
#endif
#ifdef CORDOVA_PLATFORM_ENABLED
	close_cordova_module(CORDOVA_MODULE(Platform));
#endif
#ifdef CORDOVA_FILE_ENABLED
	close_cordova_module(CORDOVA_MODULE(File));
#endif
#ifdef CORDOVA_FILETRANSFER_ENABLED
	close_cordova_module(CORDOVA_MODULE(FileTransfer));
#endif
#ifdef CORDOVA_COMPASS_ENABLED
	close_cordova_module(CORDOVA_MODULE(Compass));
#endif
#ifdef CORDOVA_CONSOLE_ENABLED
	close_cordova_module(CORDOVA_MODULE(Console));
#endif
}
