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

void insertAtBeg(int a[],int *n){
  int item;
  printf("Enter the Element you want to insert: ");
  scanf("%d", &item);
  *n += 1;
  for (int i = (*n) - 1; i > 0 ; i--)
  {
    a[i] = a[i - 1];
  }
  a[0] = item;
}

void insertAtPos(int a[],int *n,int pos){
  int item;
  printf("Enter the Element you want to insert: ");
  scanf("%d", &item);
  *n += 1;
  for (int i = (*n) - 1; i > pos-1; i--)
  {
    a[i] = a[i - 1];
  }
  a[pos-1] = item;
}