// Audio-Gain Copyright (C) 2020
// Mp3gain Copyright (C) 2001-2009 Glen Sawyer
// AAC support (C) 2004-2009 David Lasker, Altos Design, Inc.

// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

// Me trying to keep the variable naming straightforward, moving most to
// audio-gain.h

// Global libraries for audio-gain.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Since temp file is used by default preserver timestamp.
#include <sys/stat.h>
#include <utime.h>	

// Print related libraries.
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>		// Was part of lame.h

#include "aac/aacgain.h"	// A must have for aac support.

// Tagging.
#include "tag/ape-tag.h"
#include "tag/id3-tag.h"
#include "audo-gain-analysis.h"
