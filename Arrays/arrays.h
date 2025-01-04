#include<stdio.h>
void display(int arr[],int n){
  printf("Currently array looks like:\n");
  for (int i = 0; i < n;i++)
  {
    printf("a[%d] = %d\n", i, arr[i]);
  }
}