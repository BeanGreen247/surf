/*
 * gnome-keyring
 *
 * Copyright (C) 2011 Collabora Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 2.1 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program; if not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Stef Walter <stefw@collabora.co.uk>
 */

#ifndef GCR_UTIL_H
#define GCR_UTIL_H

#include <glib.h>

G_BEGIN_DECLS

typedef void  (*GcrLineCallback)              (const gchar *line,
                                               gpointer user_data);

void           _gcr_util_parse_lines          (GString *string,
                                               gboolean last_line,
                                               GcrLineCallback callback,
                                               gpointer user_data);

G_END_DECLS

#endif /* __GCR_TOKEN_MANAGER_H__ */
