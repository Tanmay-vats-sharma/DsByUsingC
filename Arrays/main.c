#include<stdio.h>
#include"arrays.h"

void main(){
  int i, n ,a[50];
  printf("Enter number of elements of array");
  scanf("%d", &n);
  printf("Enetr items of Array");
  for (i = 0; i < n;i++){
    printf("a[%d] =", i);
    scanf("%d", &a[i]);
  }
  printf("Choose your Operation to perform:\n");
  
}