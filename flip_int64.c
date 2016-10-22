#include <byteio.h>

byteio_int64
byteio_flip_int64 (byteio_int64 x)
{
  return ((byteio_int64) byteio_flip_int32 (x)) << 32
    | byteio_flip_int32 (x >> 32);
}
