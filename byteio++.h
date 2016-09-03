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

#ifndef BYTEIOXX_H_INCLUDED
#define BYTEIOXX_H_INCLUDED

#include <byteio.h>

#include <exception>
#include <string>

namespace byteio
{
  using int8 = byteio_int8;
  using int16 = byteio_int16;
  using int32 = byteio_int32;
  using int64 = byteio_int64;
  using int128 = byteio_int128;

  using uint8 = byteio_uint8;
  using uint16 = byteio_uint16;
  using uint32 = byteio_uint32;
  using uint64 = byteio_uint64;
  using uint128 = byteio_uint128;

  using float32 = byteio_float32;
  using float64 = byteio_float64;

  class exception : public std::exception
  {
  public:
    exception () noexcept;
    exception (const char *msg) noexcept;
    exception (const std::string& msg) noexcept; 
    exception (const char *when, int code) noexcept;
    virtual ~exception () noexcept;

    exception& operator= (const exception&) noexcept;

    virtual const char *what () const noexcept;
  };

  class stream
  {
  private:
    FILE *fstream;
  public:
    stream () noexcept;
    stream (const std::string&, const std::string&) noexcept;
    stream (int, const std::string&) noexcept;

    stream& operator= (const stream&) noexcept;

    void open (const std::string&, const std::string&) throw (exception);
    void open (int, const std::string&) throw (exception);
    void close () throw (exception);
  };
}

#endif
