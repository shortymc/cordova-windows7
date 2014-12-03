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


#define APP_NAME		L"Cordova Application"
#define BASE_URL		L"www\\index.html"

#define CORDOVA_REG_KEY	L"Software\\Intel\\Cordova"

// where to store persistent file storage and databases
// FolderIDs: e.g. FOLDERID_RoamingAppData, FOLDERID_LocalAppData, FOLDERID_ProgramData
#define CORDOVA_FILE_PERSISTENT_STORAGE_FOLDERID FOLDERID_RoamingAppData
#define CORDOVA_FILE_PERSISTENT_STORAGE_SUBDIR L"Cordova\\fs"

#define CORDOVA_WEBSQL_FOLDERID FOLDERID_RoamingAppData
#define CORDOVA_WEBSQL_SUBDIR L"Cordova\\db"


#define CORDOVA_FILETRANSFER_USER_AGENT L"Cordova"

// minimal IE version (use at least 9)
#define CORDOVA_INTERNET_EXPLORER_MIN_VERSION 9
#define CORDOVA_INTERNET_EXPLORER_MIN_VERSION_MSG_TEXT L"This program requires Internet Explorer 9 or newer."

// which IE version do you want to try to use?
//		NOTICE: Test your software with all IE versions you support (from minver to compatmode)!
//		NOTICE: When you change this value, delete your .exe name entry at HKEY_CURRENT_USER\Software\Microsoft\Internet Explorer\Main\FeatureControl\FEATURE_BROWSER_EMULATION
#define CORDOVA_INTERNET_EXPLORER_COMPATIBILITY_MODE 9


#ifdef _DEBUG
// opens the console in a new window (otherwise it uses the default console which is only visible when started from command prompt)
# define CORDOVA_CONSOLE_OPEN_NEW_WINDOW 1
#endif


// which keyboard shortcuts should be enabled?
#define CORDOVA_KEYBOARD_ENABLE_CUT_COPY_PASTE
//#define CORDOVA_KEYBOARD_ENABLE_FIND
//#define CORDOVA_KEYBOARD_ENABLE_PRINT
//#define CORDOVA_KEYBOARD_ENABLE_ZOOM
//#define CORDOVA_KEYBOARD_ENABLE_TAB_NAVIGATION
//#define CORDOVA_KEYBOARD_ENABLE_RELOAD
//#define CORDOVA_KEYBOARD_ENABLE_BACK


// which plugins should be loaded?
#define CORDOVA_DEVICE_ENABLED 1
#define CORDOVA_CAMERA_ENABLED 1
#define CORDOVA_CAPTURE_ENABLED 1
#define CORDOVA_ACCELEROMETER_ENABLED 1
#define CORDOVA_NETWORKSTATUS_ENABLED 1
#define CORDOVA_NOTIFICATION_ENABLED 1
#define CORDOVA_WEBSQL_ENABLED 1
#define CORDOVA_PLATFORM_ENABLED 1
#define CORDOVA_FILE_ENABLED 1
#define CORDOVA_FILETRANSFER_ENABLED 1
#define CORDOVA_COMPASS_ENABLED 1
#define CORDOVA_CONSOLE_ENABLED 1
