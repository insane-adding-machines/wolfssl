/* chacha.h
 *
 * Copyright (C) 2006-2014 wolfSSL Inc.
 *
 * This file is part of CyaSSL.
 *
 * CyaSSL is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * CyaSSL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef CTAO_CRYPT_CHACHA_H
#define CTAO_CRYPT_CHACHA_H

#include <wolfssl/wolfcrypt/chacha.h>

/* for chacha reverse compatibility */
#define Chacha_Process wc_Chacha_Process
#define Chacha_SetKey  wc_Chacha_SetKey
#define Chacha_SetIV   wc_Chacha_SetIV

#endif /* CTAO_CRYPT_CHACHA_H */

