/*
 * This file is part of the dmidecode project.
 *
 *   Copyright (C) 2005-2007 Jean Delvare <khali@linux-fr.org>
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 */

struct dmi_header
{
	u8 type;
	u8 length;
	u16 handle;
	u8 *data;
};

const char *dmi_string(struct dmi_header *dm, u8 s);
void dmi_system_uuid(u8 *p, u16 ver);
const char *dmi_chassis_type(u16 code);
const char *dmi_processor_family(u16 code);
void dmi_processor_frequency(u8 *p, u16 ver);
