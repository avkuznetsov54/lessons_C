#include <stdio.h>
#include <inttypes.h>

int main()
{
  int8_t x = 127;
  printf("x = %d\n", x);
  x = x + 1;
  printf("x = %d\n", x);

  return 0;
}