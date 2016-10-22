#include <byteio.h>

byteio_uint16
byteio_flip_uint16 (byteio_uint16 x)
{
  return x << 8 | x >> 8;
}
