//Updating Value of a varieble using pointer,function and dereference operator.

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

//or

#include<stdio.h>
int fun(int *ptr)
{
  *ptr=*ptr+100; 
}
int main()
{
  int a=10;
  printf("The value of a is : %d\n",a);
  fun(&a);
  printf("%d",a);
  return 0;
}

