#include <stdio.h>
int k=1000;
void f(void)
{
  printf("k=%d\n",k);
  return;
}
int main()
{
   f(); 
   return 0;
}

