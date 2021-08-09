#include <stdio.h>

#define SIZE 4

// Выводим адреса массива
void showArrayAddresses(float array[])
{
  printf("\n[*] Array Address:\n");

  printf("0: %p\n", &array[0]);
  printf("1: %p\n", &array[1]);
  printf("2: %p\n", &array[2]);
  printf("3: %p\n", &array[3]);

  return;
}
// (float array[]) переводиться в (float * array)
void showArrayAddressesByPointer(float *array)
{
  printf("\n[*] Array Address By Pointer:\n");

  printf("0: %p\n", &array[0]);
  printf("1: %p\n", &array[1]);
  printf("2: %p\n", &array[2]);
  printf("3: %p\n", &array[3]);

  return;
}

int main(void)
{
  float prices[SIZE] = {1000.0,
                        2000.0,
                        3000.0,
                        4000.0};

  printf("\n[*] Index Access:\n");
  // index access
  printf("0: %f\n", prices[0]);
  printf("1: %f\n", prices[1]);
  printf("2: %f\n", prices[2]);
  printf("3: %f\n", prices[3]);

  printf("\n[*] Pointer Access:\n");
  // pointer access
  printf("0: %.2f\n", *prices);       // 0 элемент
  printf("0: %.2f\n", *(prices + 0)); // 0 элемент
  printf("1: %.2f\n", *(prices + 1)); // 1 элемент
  // *(prices + 1) – это сдвиг на размер типа,
  // размер сдвига определяем через size_t

  printf("\n");

  // size_t – тип для работы с памятью
  size_t floatSize = sizeof(float);
  size_t intSize = sizeof(int);
  size_t charSize = sizeof(char);

  printf("Float size: %zu bytes\n", floatSize); // Float size: 4 bytes
  printf("Int size: %zu bytes\n", intSize);     // Int size: 4 bytes
  printf("Char size: %zu bytes\n", charSize);   // Char size: 1 bytes

  // Вычисляем размер массива
  printf("Prices size: %zu bytes\n", sizeof prices); // Prices size: 16 bytes

  showArrayAddresses(prices);
  showArrayAddressesByPointer(prices);

  return 0;
}