#include <stdio.h>

// signed short   -32 768 ... 32 767
// unsined short        0 ... 65 535

// % – маркер
// %i (integer) – число -2 млрд. ... 2 млрд.
// %s (string) – строка
// %30s – строка с шириной поля 30 символов, выравнивание по правому краю
// %-30s – строка с шириной поля 30 символов, выравнивание по левому краю

int main()
{
  unsigned short firstValue = 30000;
  unsigned short secondValue = 20000;
  signed short thirdValue = -30000;

  printf("%-15s %i \n", "First value: ", firstValue);
  printf("%-15s %i \n", "Second value: ", secondValue);
  printf("%-15s %i \n", "Third value: ", thirdValue);

  return 0;
}