#include <stdio.h>

#define EOL '\n' // EOL – End Of Line

int main()
{
  char one = 1;
  char two = 2;
  char three = 3;

  char *onePointer = NULL;
  char *twoPointer = NULL;
  char *threePointer = NULL;

  onePointer = &one;
  twoPointer = &two;
  threePointer = &three;

  printf("%cOne variable: %d%c", EOL, one, EOL); // One variable: 1
  printf("Two variable: %d%c", two, EOL);        // Two variable: 2
  printf("Three variable: %d%c", three, EOL);    // Three variable: 3

  printf("%cOne address: 0x%X%c", EOL, onePointer, EOL); // One address: 0xE79BF7FB
  printf("Two address: 0x%X%c", twoPointer, EOL);        // Two address: 0xE79BF7FA
  printf("Three address: 0x%X%c", threePointer, EOL);    // Three address: 0xE79BF7F9

  printf("%cOne value: %d%c", EOL, *onePointer, EOL); // One value: 1
  printf("Two value: %d%c", *twoPointer, EOL);        // Two value: 2
  printf("Three value: %d%c", *threePointer, EOL);    // Three value: 3

  *onePointer = 10;
  *twoPointer = 20;
  *threePointer = 30;

  printf("%cOne pointer: %d%c", EOL, *onePointer, EOL); // One pointer: 10
  printf("Two pointer: %d%c", *twoPointer, EOL);        // Two pointer: 20
  printf("Three pointer: %d%c", *threePointer, EOL);    // Three pointer: 30

  printf("%cOne variable: %d%c", EOL, one, EOL); // One variable: 10
  printf("Two variable: %d%c", two, EOL);        // Two variable: 20
  printf("Three variable: %d%c", three, EOL);    // Three variable: 30

  return 0;
}