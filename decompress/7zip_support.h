/*  RetroArch - A frontend for libretro.
 *  Copyright (C) 2014-2015 - Timo Strunk
 *  Copyright (C) 2011-2015 - Daniel De Matteis
 * 
 *  RetroArch is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  RetroArch is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with RetroArch.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __RARCH_7ZIP_SUPPORT_H
#define __RARCH_7ZIP_SUPPORT_H

#ifdef __cplusplus
extern "C" {
#endif

int read_7zip_file(const char * archive_path,
      const char *relative_path, void **buf, char const* optional_outfileq);

struct string_list *compressed_7zip_file_list_new(const char *path,
      const char* ext);

#ifdef __cplusplus
}
#endif

#endif
