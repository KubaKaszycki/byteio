/*-
 * Copyright (C) 2016 Jakub Kaszycki
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHORS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHORS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef BYTEIO_H_INCLUDED
#define BYTEIO_H_INCLUDED

#include <stdint.h>
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

int *byteio__get_errno (void);

#define byteio_errno (*byteio__get_errno (void))

typedef int8_t byteio_int8;
typedef int16_t byteio_int16;
typedef int32_t byteio_int32;
typedef int64_t byteio_int64;

typedef uint8_t byteio_uint8;
typedef uint16_t byteio_uint16;
typedef uint32_t byteio_uint32;
typedef uint64_t byteio_uint64;

typedef float byteio_float32;
typedef double byteio_float64;

int byteio_write_int8 (FILE *, byteio_int8);
int byteio_write_int16 (FILE *, byteio_int16);
int byteio_write_int32 (FILE *, byteio_int32);
int byteio_write_int64 (FILE *, byteio_int64);

int byteio_write_uint8 (FILE *, byteio_uint8);
int byteio_write_uint16 (FILE *, byteio_uint16);
int byteio_write_uint32 (FILE *, byteio_uint32);
int byteio_write_uint64 (FILE *, byteio_uint64);

int byteio_write_float32 (FILE *, byteio_float32);
int byteio_write_float64 (FILE *, byteio_float64);

byteio_int8 byteio_read_int8 (FILE *);
byteio_int16 byteio_read_int16 (FILE *);
byteio_int32 byteio_read_int32 (FILE *);
byteio_int64 byteio_read_int64 (FILE *);

byteio_uint8 byteio_read_uint8 (FILE *);
byteio_uint16 byteio_read_uint16 (FILE *);
byteio_uint32 byteio_read_uint32 (FILE *);
byteio_uint64 byteio_read_uint64 (FILE *);

byteio_float32 byteio_read_float32 (FILE *);
byteio_float64 byteio_read_float64 (FILE *);

int byteio_readsafe_int8 (FILE *, byteio_int8 *);
int byteio_readsafe_int16 (FILE *, byteio_int16 *);
int byteio_readsafe_int32 (FILE *, byteio_int32 *);
int byteio_readsafe_int64 (FILE *, byteio_int64 *);

int byteio_readsafe_uint8 (FILE *, byteio_uint8 *);
int byteio_readsafe_uint16 (FILE *, byteio_uint16 *);
int byteio_readsafe_uint32 (FILE *, byteio_uint32 *);
int byteio_readsafe_uint64 (FILE *, byteio_uint64 *);

int byteio_readsafe_float32 (FILE *, byteio_float32 *);
int byteio_readsafe_float64 (FILE *, byteio_float64 *);

byteio_int16 byteio_flip_int16 (byteio_int16);
byteio_int32 byteio_flip_int32 (byteio_int32);
byteio_int64 byteio_flip_int64 (byteio_int64);

byteio_uint16 byteio_flip_uint16 (byteio_uint16);
byteio_uint32 byteio_flip_uint32 (byteio_uint32);
byteio_uint64 byteio_flip_uint64 (byteio_uint64);

#ifdef __cplusplus
}
#endif

#endif
