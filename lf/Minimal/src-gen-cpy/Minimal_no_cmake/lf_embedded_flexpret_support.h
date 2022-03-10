/*************
Copyright (c) 2021, The University of California at Berkeley.
Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:
1. Redistributions of source code must retain the above copyright notice,
   this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
***************/

/** Support file for Bare-metal FlexPRET platform.
 *  
 *  @author{Shaokai Lin <shaokai@berkeley.edu>}
 */

#ifndef LF_BAREMETAL_RISCV_SUPPORT_H
#define LF_BAREMETAL_RISCV_SUPPORT_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

/**
 * Time instant. Both physical and logical times are represented
 * using this typedef.
 * WARNING: If this code is used after about the year 2262,
 * then representing time as a 64-bit long long will be insufficient.
 */
typedef int64_t _instant_t;

/**
 * Interval of time.
 */
typedef int64_t _interval_t;

/**
 * Microstep instant.
 */
typedef uint32_t _microstep_t;

void *malloc(size_t size);
void free(void *ptr);

int printf(const char *format, ...);
int puts(const char *str);
int sprintf(char *str, const char *format, ...);
int snprintf(char *str, size_t size, const char *format, ...);
int vprintf(const char *format, va_list ap);
int vfprintf(FILE *stream, const char *format, va_list arg);
#endif // LF_BAREMETAL_RISCV_SUPPORT_H
