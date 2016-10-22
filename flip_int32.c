#include <byteio.h>

byteio_int32
byteio_flip_int32 (byteio_int32 x)
{
  return ((byteio_int32) byteio_flip_int16 (x)) << 16
    | byteio_flip_int16 (x >> 16);
}
