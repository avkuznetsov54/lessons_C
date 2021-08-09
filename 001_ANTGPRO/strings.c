#include <stdio.h>

// Константа уровня компеляции, создаеться когда программа компилируеться.
#define SIZE 4

int main(void)
{
  char hello1[] = {'H',
                   'e',
                   'l',
                   'l',
                   'o',
                   '1',
                   '\0'};
  // '\0' – (null terminator) обозначает что это строка, ставиться последним элементом.
  char hello2[] = "Hello2";

  // C помощью указателя,
  // менять в дальнейшем значение/символы строки нельзя, будет ошибка !!!
  // Это вроде константы.
  char *hello3 = "Hello3";
  // чтоб обезопасить себя необходимо добавить const,
  // и значение становиться константой
  // const говорит нам что данный указатель не может менять своё содержимое в ходе выполнения программы.
  const char *hello3_1 = "Hello3_1";
  // Эта константа инициализируеться во время выполнения программы.

  printf("%s\n", hello1);
  printf("%s\n", hello2);
  printf("%s\n", hello3);
  // %s – вывод строки

  // Заменяем элемент в строке.
  hello1[0] = 'X';
  printf("%s\n", hello1); // Xello1

  const char *hello4 = "Hello4";
  // Имя указателя *hello4 указывает на 0 символ строки = H
  printf("%c\n", *hello4); // H

  // ***********************************

  printf("\nChange address pointer\n");
  // Можно изменять адрес
  const char *Hello5 = "Hello5";
  const char *Hello6 = "Hello6";
  // так как hello5 и hello6 указателе, то в printf() ставить & не нужно.
  printf("%p\n", Hello5); // 0x108d3bfa0
  printf("%p\n", Hello6); // 0x108d3bfa7
  // Приравниваем указатели:
  Hello5 = Hello6;
  printf("Hello5: %p\n", Hello5); // Hello5: 0x108d3bfa7
  printf("Hello6: %p\n", Hello6); // Hello6: 0x108d3bfa7
  printf("Hello5: %s\n", Hello5); // Hello5: Hello6
  printf("Hello6: %s\n", Hello6); // Hello6: Hello6

  // Что бы запретить изменять адрес:
  const char *const Hello7 = "Hello7";

  return 0;
}