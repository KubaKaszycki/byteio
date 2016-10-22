#include <byteio.h>

byteio_int16
byteio_flip_int16 (byteio_int16 x)
{
  return x << 8 | x >> 8;
}
