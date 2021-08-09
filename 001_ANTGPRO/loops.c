#include <stdio.h>
#include <stdbool.h>

#define SIZE 4

int main(void)
{
  int prices[] = {100,
                  200,
                  300,
                  400};

  bool isTrue = true;
  bool isFalse = false;
  printf("True: %d, False: %d\n", isTrue, isFalse);

  int i = 0;

  while (i < SIZE)
  {
    printf("%d\n", prices[i]);
    i = i + 1;
  }

  for (int i = 0; i < SIZE; i++)
  {
    printf("%d\n", prices[i]);
  }

  return 0;
}