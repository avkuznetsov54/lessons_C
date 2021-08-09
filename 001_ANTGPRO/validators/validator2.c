// gcc validator2.c -o validator2 -Wall
// Управляющие последовательности ANSI
// https://ru.wikipedia.org/wiki/Управляющие_последовательности_ANSI

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define AC_RED "\x1b[31m"
#define AC_RED_BOLD "\x1b[31;1m"
#define AC_GREEN "\x1b[32m"
#define AC_GREEN_AND_BG "\x1b[32;45m"
#define AC_YELLOW "\x1b[33m"
#define AC_BLUE "\x1b[34m"
#define AC_MAGENTA "\x1b[35m"
#define AC_CYAN "\x1b[36m"
#define AC_RESET "\x1b[0m"

const char *const allowedFlags[] = {"--size", "--sort", "--print", "--mode"};
// Переменная со значение длины массива:
const int const allowedFlagsLength = sizeof allowedFlags / sizeof allowedFlags[0];

void validateFlags(const char *const flags[], const int const length)
{

  int incorrectFlagIndex = -1;

  for (int i = 1; i < length; i++)
  {

    for (int j = 0; j < allowedFlagsLength; j++)
    {
      if (strcmp(flags[i], allowedFlags[j]) == 0)
      {
        incorrectFlagIndex = -1;
        break;
      }
      else
      {
        incorrectFlagIndex = i;
      }
    }

    if (incorrectFlagIndex > -1)
    {
      printf(AC_RED "[-] Error: %s incorrect flag was given!%s\n", flags[incorrectFlagIndex], AC_RESET);
      printf(AC_RED_BOLD "[-] Error: %s incorrect flag was given!%s\n", flags[incorrectFlagIndex], AC_RESET);
      exit(EXIT_FAILURE);
    }
  }
}

int main(const int const argc, const char *const argv[])
{
  // printf("%d\n", argc);

  if (argc > 1)
  {
    validateFlags(argv, argc);
  }

  printf(AC_GREEN "[+] Congratulations!%s\n", AC_RESET);
  printf(AC_GREEN_AND_BG "[+] Congratulations!%s\n", AC_RESET);

  return EXIT_SUCCESS;
}