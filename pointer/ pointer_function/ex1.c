
#include <stdio.h>

int main()
{
  int char a[] = {1, 2};
  int int *ptr = (*int)&a;
  
  printf("%d\n", *ptr);
  return 0;
}
