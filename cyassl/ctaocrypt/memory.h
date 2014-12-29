/* memory.h
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

/* submitted by eof */


#ifndef CYASSL_MEMORY_H
#define CYASSL_MEMORY_H

#include <stdlib.h>

/* for fips compatibility @wc_fips */
#ifndef HAVE_FIPS
#include <wolfssl/wolfcrypt/memory.h>
#else

#ifdef __cplusplus
    extern "C" {
#endif


typedef void *(*CyaSSL_Malloc_cb)(size_t size);
typedef void (*CyaSSL_Free_cb)(void *ptr);
typedef void *(*CyaSSL_Realloc_cb)(void *ptr, size_t size);


/* Public set function */
CYASSL_API int CyaSSL_SetAllocators(CyaSSL_Malloc_cb  malloc_function,
                                    CyaSSL_Free_cb    free_function,
                                    CyaSSL_Realloc_cb realloc_function);

/* Public in case user app wants to use XMALLOC/XFREE */
CYASSL_API void* CyaSSL_Malloc(size_t size);
CYASSL_API void  CyaSSL_Free(void *ptr);
CYASSL_API void* CyaSSL_Realloc(void *ptr, size_t size);


#ifdef __cplusplus
}
#endif

#endif /* HAVE_FIPS */
#endif /* CYASSL_MEMORY_H */

