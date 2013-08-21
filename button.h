/*
* Button header file
*
* Copyright (C) 2009  Intel Corporation
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU Lesser General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public License along
* with this program; if not, write to the Free Software Foundation, Inc.,
* 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/


#ifndef __BUTTON_H
#define __BUTTON_H

#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <time.h>
#include <errno.h>
#include <sys/time.h>
#include <signal.h>
#include <sys/resource.h>
#include <sys/wait.h> 
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/Xlibint.h>
#include <X11/extensions/XTest.h>
#include <string.h>
#include <unistd.h>

typedef enum{
        KEY_PRESSED = KeyPressMask,
        KEY_RELEASED = KeyReleaseMask,
} KEY_STATUS_MASK;

/* Button.h */
Window get_active_Xid(Display *xdpy);
int set_window_focus(Display *xdpy, Window Xid);
int set_window_active(Display *xdpy, Window Xid);
Window search_wid_from_name(Display *xdpy, char *name);
void send_fake_key(Display *xdpy, Window Xid, int keycode, KEY_STATUS_MASK mask, int modstate);
void pageup(Display *xdpy, KEY_STATUS_MASK mask);
void pagedown(Display *xdpy, KEY_STATUS_MASK mask);
void launch_camera(Display *xdpy);
void capture_photo(Display *xdpy, KEY_STATUS_MASK mask);
void handle_button_msg(Display *xdpy, int key_msg);

#endif

/*END OF FILE*/

