#include<stdio.h>

void display(int a[],int *n){
  printf("%d", *n);
  printf("Currently array looks like:\n");
  for (int i = 0; i < *n;i++)
  {
    printf("a[%d] = %d\n", i, a[i]);
  }
}

void insertAtEnd(int a[],int *n){
  int item;
  printf("Enter the Element you want to insert: ");
  scanf("%d", &item);
  *n += 1;
  a[(*n)-1] = item;
  
}