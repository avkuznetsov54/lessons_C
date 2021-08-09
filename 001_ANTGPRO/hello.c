// // Точка входа,
// // для исполнения программы.
// // void main() – Ничего не возвращает.
// // Аргумент – void => явно даём понять что аргументов нет,
// // никакие аргументы передовать нельзя и никто их передовать не будет.
// void main(void)
// {
//   return;
// }

#include <stdio.h>

// void hello(void)
// {
//   printf("Hello World");
//   return;
// }

// int main()
// {
//   hello();
//   return 0;
// }

char getNumber(void)
{
  return 13;
}
char getChar1(void)
{
  return 65;
}

int main(void)
{
  // %d (decimal) – десятичные числа
  // &c (char) – символьные знаки

  // Перевод курсора на новую строку
  // \r\n – for Wimdows
  // \n – for *unix

  printf("%d %d\n", getNumber(), getNumber());

  printf("%c\r\n", getChar1());
  return 0;
}