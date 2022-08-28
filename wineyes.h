/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Xeyes for Windows
 *
 * (C) 2022 Yutaka Hirata(YOULAB)
 */

#ifndef _WINEYES_H_
#define _WINEYES_H_

#include <string.h>

//
// System menu ID
//
#define ID_ABOUT          100
#define ID_DEFAULT_SIZE   101
#define ID_ALWAYS_ON_TOP  102
#define ID_TERMINATE_ALL  103

// 
// Application name
//
#define WINEYES_APPNAME  "XeyesForWindows"
#define WINEYES_TITLE	"Xeyes for Windows"

//
// For printf debugging
// 
// The debug message can read by using DebugView tool. 
// However this is enabled when the source code is built by debug mode.
//
#ifdef _DEBUG
#define DEBUG_PRINT(...) { \
	char buf[128] = {0}; \
	snprintf(buf, sizeof(buf), __VA_ARGS__); \
	OutputDebugString(buf); \
}
#else
#define DEBUG_PRINT(...) 
#endif

#endif   /* _WINEYES_H_ */
