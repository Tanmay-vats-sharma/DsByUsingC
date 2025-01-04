#include<stdio.h>
#include"arrays.h"
int a[50];
void main(){
  int i, n ,choice, option;
  printf("Enter number of elements of array");
  scanf("%d", &n);
  printf("Enetr items of Array");
  for (i = 0; i < n;i++){
    printf("a[%d] =", i);
    scanf("%d", &a[i]);
  }
  do
  {
    printf("Choose your Operation to perform:\n");
    printf("1. Display");
    printf("2. Insertion");
    printf("3. Deletion");
    printf("4. Exit");
    printf("Enetr your choice 1 or 2 or 3 or 4: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      display(a, &n);
      break;  
    case 2:
      printf("Types of insertion");
      printf("1. Insertion at Ending");
      printf("2. Insertion at Beggining");
      printf("3. Insertion at Specific Position");
      printf("Enter your Choice: ");
      scanf("%d", &option);
      switch (option)
      {
      case 1:
        insertAtEnd(a,&n);
        break;
      
      default:
        break;
      }
      break;
    
    default:
      break;
    }
  } while (choice!=4);
  
  

}