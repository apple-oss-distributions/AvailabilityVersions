/*
 * Copyright (c) 2007-2017 by Apple Inc.. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_LICENSE_HEADER_END@
 */

/*
    File:       AvailabilityProhibitedInternal.h
 
    Contains:   Apple Internal *_PROHIBITED macro implementation

*/

/* Define the PROHIBITED macros away */
#undef __WATCHOS_PROHIBITED
#define __WATCHOS_PROHIBITED

#undef __TVOS_PROHIBITED
#define __TVOS_PROHIBITED

#undef __IOS_PROHIBITED
#define __IOS_PROHIBITED

