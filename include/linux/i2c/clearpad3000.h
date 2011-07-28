/* include/linux/i2c/clearpad3000.h
 *
 * Copyright (C) [2010] Sony Ericsson Mobile Communications AB.
 *
 * Author: Courtney Cavin <courtney.cavin@sonyericsson.com>
 *         Yusuke Yoshimura <Yusuke.Yoshimura@sonyericsson.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2, as
 * published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 */

#ifndef __LINUX_I2C_CLEARPAD3000_H
#define __LINUX_I2C_CLEARPAD3000_H

enum synaptics_funcarea_kind {
	SYN_FUNCAREA_INSENSIBLE,
	SYN_FUNCAREA_POINTER,
	SYN_FUNCAREA_BUTTON,
	SYN_FUNCAREA_END,
};

struct synaptics_funcarea {
	int x1;
	int y1;
	int x2;
	int y2;
	enum synaptics_funcarea_kind func;
	void *data;
};

struct synaptics_button {
	int type;
	int code;
	bool down;
	int down_count;
	int up_count;
};

struct clearpad3000_platform_data {
	struct synaptics_funcarea *funcarea; /* last one = SYN_FUNCAREA_END */
	int (*gpio_configure)(int);
};

#endif /* __LINUX_I2C_CLEARPAD3000_H */
