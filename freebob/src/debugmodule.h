/* debugmodule.h
 * Copyright (C) 2004 by Daniel Wagner
 *
 * This file is part of FreeBob.
 *
 * FreeBob is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * FreeBob is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with FreeBob; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA.
 */

#ifndef DEBUGMODULE_H
#define DEBUGMODULE_H

#include <stdio.h>
#include "ieee1394service.h"

#define DEBUG_LEVEL_INFO     	  5
#define DEBUG_LEVEL_TRANSFERS     6

#define DEBUG_LEVEL DEBUG_LEVEL_INFO

#define debugError(format, args...) fprintf( stderr, format,  ##args )
#define debugPrint(Level, format, args...) if(DEBUG_LEVEL>=Level) printf( format, ##args );

unsigned char toAscii(unsigned char c);
void quadlet2char(quadlet_t quadlet,unsigned char* buff);
void hexDump(unsigned char *data_start, unsigned int length);


#endif