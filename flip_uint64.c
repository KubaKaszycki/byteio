#include <byteio.h>

byteio_uint64
byteio_flip_uint64 (byteio_uint64 x)
{
  return ((byteio_uint64) byteio_flip_uint32 (x)) << 32
    | byteio_flip_uint32 (x >> 32);
}
