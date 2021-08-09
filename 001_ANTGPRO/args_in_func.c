#include <stdio.h>

unsigned short total(unsigned char a, unsigned char b)
{
  unsigned short total = 0;
  total = a + b;
  return total;
}

int main()
{
  printf("%i\n", total(2, 3));

  return 0;
}