#include <stdio.h>
#include "../libhello/hello.h"
int main(int argc, char **argv)
{
  int value = hello(3);
  printf("value %d\n", value);
  return 0;
}
