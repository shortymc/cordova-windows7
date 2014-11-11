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

#define CORDOVA_STORAGE_DATABASE_FOLDERID FOLDERID_RoamingAppData
#define CORDOVA_STORAGE_DATABASE_SUBDIR L"Cordova\\db"


#define CORDOVA_FILETRANSFER_USER_AGENT L"Cordova"


#ifdef _DEBUG
// opens the console in a new window (otherwise it uses the default console which is only visible when started from command prompt)
# define CORDOVA_CONSOLE_OPEN_NEW_WINDOW 1
#endif


// which plugins should be loaded?
#define CORDOVA_DEVICE_ENABLED 1
#define CORDOVA_CAMERA_ENABLED 1
#define CORDOVA_CAPTURE_ENABLED 1
#define CORDOVA_ACCELEROMETER_ENABLED 1
#define CORDOVA_NETWORKSTATUS_ENABLED 1
#define CORDOVA_NOTIFICATION_ENABLED 1
#define CORDOVA_STORAGE_ENABLED 1
#define CORDOVA_PLATFORM_ENABLED 1
#define CORDOVA_FILE_ENABLED 1
#define CORDOVA_FILETRANSFER_ENABLED 1
#define CORDOVA_COMPASS_ENABLED 1
#define CORDOVA_CONSOLE_ENABLED 1
