#include <byteio.h>

byteio_uint32
byteio_flip_uint32 (byteio_uint32 x)
{
  return ((byteio_uint32) byteio_flip_uint16 (x)) << 16
    | byteio_flip_uint16 (x >> 16);
}
