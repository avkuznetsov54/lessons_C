#include <stdio.h>

// const аргумента защищает от не преднамеренного изменения.
void printString1(const char *string)
{
  printf("%s\n", string);
  return;
}
// (const char *string) = (const char string[])
void printString2(const char string[])
{
  printf("%s\n", string);
  return;
}

// Функция принимает многомерный массив
// (const char **string) = (const char *string[])
void printArrayString(const char **string)
{
  printf("%s\n", string[0]);
  printf("%s\n", string[1]);
  printf("%s\n", string[2]);
}

int main(void)
{
  const char *hello1 = "Hello1";

  printString1(hello1);
  printString2(hello1);

  // Создаем массив
  const char *states[] = {"Moscow", "New-York", "Kiev"};
  const char states2[3][20] = {"Moscow", "New-York", "Kiev"};
  // [3] – три элемента массива.
  // [20] – максималькое кол-во символов для каждой строки.

  const float *prices[] = {{0, 0},
                           {0, 0},
                           {0, 0}};
  const float prices2[3][2] = {{0, 0},
                               {0, 0},
                               {0, 0}};

  printArrayString(states);

  return 0;
}