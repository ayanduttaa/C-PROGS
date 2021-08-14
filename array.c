//C code for Creating an array with user given size and elements. Doing several operations on the array.Inserting elements, Updating element,deleting element, Chcking sorted or not, Searching element.
#include<stdio.h>

int main()
{
  int size;
  int num;
  int arr[100];
  int i;
  printf("Enter size of array : ");
  scanf("%d",&size);
  for(i=0;i<size;i++)
  {
    printf("Enter the %dth element : ",i);
    scanf("%d",&num);
    arr[i]=num;
  }
  printf("Insertion complete !\n");
  for(i=0;i<size;i++)
  {
    printf("The %d th element is : %d\n",i,arr[i]);
  }
  int pos,ele;
  printf("Enter index you want add value :");
  scanf("%d",&pos);
  printf("Enter element : ");
  scanf("%d",&ele);
  for(i=size;i>pos;i--)
  {
    arr[i]=arr[i-1];
  }
  arr[pos]=ele;
  for(i=0;i<=size;i++)
  {
    printf("The %d th element is : %d\n",i,arr[i]);
  }
  int key;
  printf("Enter element you want to search : ");
  scanf("%d",&key);
  for(i=0;i<=size;i++)
  {
    if(arr[i]==key)
    printf("The element is in %d th index\n",i);
    else
    printf("Not found in %d th index\n",i);
  }
  printf("\n");
  printf("\n");
  printf("Checking sorted or not\n");
  for(i=0;i<size;i++)
  {
    if(arr[i]<arr[i+1])
    printf("element %d & %d are Sorted\n",i+1,i+2);
    else
    printf("element %d & %d are Not sorted\n",i+1,i+2);
  }
  int index;
  printf("Enter the index of number you want to delete : ");
  scanf("%d",&index);
  for(i=index;i<=size;i++)
  {
    arr[i]=arr[i+1];
  }
  for(i=0;i<size;i++)
  {
    printf("The %d th element is : %d\n",i,arr[i]);
  }
  return 0;
}
