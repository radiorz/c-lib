#include <stdio.h>
#include "../libhello/hello.h"
void func(void *arg)
{
  int flag = *((int *)arg);
}
int main(int argc, char **argv)
{
  printf("123123\n");
  // int value = returnSomeValue(3);
  // printf("value %d\n", value);
  return 0;
}
