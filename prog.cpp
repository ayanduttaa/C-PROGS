#include<stdio.h>
int fun(int a)
{
  int *ptr=&a;
  *ptr=*ptr+100;
  return a;
}
int main()
{
  int a=10;
  printf("The value of a is : %d\n",a);
  printf("%d",fun(a));
  return 0;
}
