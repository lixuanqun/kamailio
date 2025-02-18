/*
 * Fast 32-bit Header Field Name Parser
 *
 * Copyright (C) 2001-2003 FhG Fokus
 *
 * This file is part of Kamailio, a free SIP server.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 *
 * Kamailio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version
 *
 * Kamailio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

/*! \file
 * \brief Parser :: Fast Header Field Name Parser
 *
 * \ingroup parser
 */

#ifndef PARSE_HNAME2_H
#define PARSE_HNAME2_H

#include "hf.h"


/** Fast 32-bit header field name parser.
 * @file
 */

char *parse_sip_header_name(char *const begin, const char *const end,
		hdr_field_t *const hdr, int emode, int logmode);

/* macro to find header name without printing errors in failure case */
#define find_hname2_str(hbuf, hdr) \
	parse_sip_header_name((hbuf)->s, (hbuf)->s + (hbuf)->len, hdr, 1, 0)


char *parse_hname2(
		char *const begin, const char *const end, struct hdr_field *const hdr);
char *parse_hname2_short(
		char *const begin, const char *const end, struct hdr_field *const hdr);
char *parse_hname2_str(str *const hbuf, hdr_field_t *const hdr);

int ksr_hname_init_index(void);
int ksr_hname_init_config(void);

#endif /* PARSE_HNAME2_H */
