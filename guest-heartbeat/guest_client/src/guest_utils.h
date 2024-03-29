/*
 * Copyright (c) 2013-2018, Wind River Systems, Inc.
 *
 * Redistribution and use in source and binary forms, with or without modification, are
 * permitted provided that the following conditions are met:
 *
 * 1) Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2) Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation and/or
 * other materials provided with the distribution.
 *
 * 3) Neither the name of Wind River Systems nor the names of its contributors may be
 * used to endorse or promote products derived from this software without specific
 * prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
 * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef __GUEST_UTILITIES_H__
#define __GUEST_UTILITIES_H__

#include <json-c/json.h>

#ifdef __cplusplus
extern "C" {
#endif

#define STRINGIZE(str) #str
#define MAKE_STRING(str)  STRINGIZE(str)

// ****************************************************************************
// Guest Utilities - Trim
// ======================
extern char* guest_utils_trim( char* str, char* discard );
// ****************************************************************************

// ****************************************************************************
// Guest Utilities - Base Name
// ===========================
extern char* guest_utils_basename( char* str );
// ****************************************************************************

// ****************************************************************************
// Guest Utilities - Get JSON Value from Key
// return 0 if success, -1 if fail.
// =========================================
extern int guest_utils_json_get_value( struct json_object* jobj,
                                       const char* key, void * value );

// ****************************************************************************
// Guest Utilities - replace newline with space
// ======================
char* guest_utils_remove_newline( char* str);
// ****************************************************************************

#ifdef __cplusplus
}
#endif

#endif /* __GUEST_UTILITIES_H__ */
