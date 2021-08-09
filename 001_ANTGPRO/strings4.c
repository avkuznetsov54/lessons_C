#include <stdio.h>

const char *allowedFlags[] = {"--print", "--god-mod"};
const char *allowedArgs[] = {"-n", "-p", "-j"};

unsigned int checkAllowedFlags(const char **const flags)
{
  // for | while
}

int main(int argc, const char **const argv)
{
  printf("%d\n", argc);

  if (argc > 1)
    checkAllowedFlags(argv);

  printf("%s\n", argv[0]);
  printf("%s\n", argv[1]);
  printf("%s\n", argv[2]);

  return 0;
}