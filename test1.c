#include<stdio.h>
int main()
{
  int i;
  int arr[4]={23,89,90,45};
  for(i=0;i<3;i++)
  {
    if(arr[i]<arr[i+1])
    printf("element %d & %d are Sorted\n",i+1,i+2);
    else
    printf("element %d & %d are Not sorted\n",i+1,i+2);

  }
  return 0;
}
