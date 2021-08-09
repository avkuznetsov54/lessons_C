#include <stdio.h>

#define SIZE 4

int main(void)
{
  float price = 12.0f;
  float prices[4] = {1000.0f,
                     2000.0f,
                     3000.0f,
                     4000.0f};
  // Можно и без f на конце

  printf("%f\n", prices[0]); // 1000.000000
  printf("%f\n", prices[1]); // 2000.000000
  printf("%f\n", prices[2]); // 3000.000000
  printf("%f\n", prices[3]); // 4000.000000

  printf("%.2f\n", prices[0]);   // 1000.00
  printf("%10.2f\n", prices[0]); //    1000.00

  // *************************
  // ГРУБЕЙШАЯ ОШИБКА !!!
  // Выходим за границы стэка, который зарезервировали и получаем мусор !!!
  printf("%f\n", prices[4]); // -16092523397298643795968.000000

  // Не оставлять не инициализированный массив !!! В него запишеться мусор !!!
  float prices2[SIZE];
  // Можно сделать так:
  float prices3[SIZE] = {};     // Все элементы будут = 0
  float prices4[SIZE] = {1};    // 0 элемент = 1, остальные = 0
  float prices5[SIZE] = {1, 2}; // 0 элемент = 1, 1 элемент = 2, остальные = 0
  // *************************

  // Инициализация определенных элементов
  // [n] – индекс элемента
  // float prices6[SIZE] = {0, 1, [2] = 2, 3};
  // float prices6[SIZE] = {0, 1, [2] = 2};
  float prices6[SIZE] = {1, [2] = 2};
  printf("prices6 0: %f\n", prices6[0]);
  printf("prices6 1: %f\n", prices6[1]);
  printf("prices6 2: %f\n", prices6[2]);
  printf("prices6 3: %f\n", prices6[3]);

  return 0;
}