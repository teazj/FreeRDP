/**
 * FreeRDP: A Remote Desktop Protocol Client
 * XKB-based Keyboard Mapping to Microsoft Keyboard System
 *
 * Copyright 2009 Marc-Andre Moreau <marcandre.moreau@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __KEYBOARD_H
#define __KEYBOARD_H

#include <freerdp/types.h>

typedef uint32 KeycodeToVkcode[256];

struct _RDP_KEYCODE
{
	uint32 extended;
	uint32 keycode;
	const char* keyname;
};
typedef struct _RDP_KEYCODE RDP_KEYCODE;

void freerdp_keyboard_load_maps(KeycodeToVkcode keycodeToVkcode, char* names);

#endif /* __KEYBOARD_H */
