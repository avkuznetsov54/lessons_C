#include <stdio.h>

// int argc – количесво аргументов, которые передаются программе при старте.
// char *argv[] – многомерный массив строк.
// 0 аргумент – это название программы.
// char *argv[] = char **argv
int main(int argc, char *argv[])
{
  printf("%d\n", argc);

  printf("%s\n", argv[0]);

  // скомпилировать программу: gcc strings3.c -o strings3 -Wall
  // и запустить: ./strings3 a b
  printf("%s\n", argv[1]);
  printf("%s\n", argv[2]);

  return 0;
}

// result:
// 3
// ./strings3
// a
// b

// Не изменяемый массив **argv,
// не изменяем значения передоваемых команд при запуске программы:
// int main(int argc, const char **argv)

// Не исменяемый адресс массива **argv,
// у **argv всегда один и тот же адресс:
// int main(int argc, const char **const argv)