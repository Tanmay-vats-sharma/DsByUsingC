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
    printf("1. Display\n");
    printf("2. Insertion\n");
    printf("3. Deletion\n");
    printf("4. Exit\n");
    printf("Enetr your choice 1 or 2 or 3 or 4: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      display(a, &n);
      break;  
    case 2:
      printf("\nTypes of insertion\n");
      printf("1. Insertion at Ending\n");
      printf("2. Insertion at Beggining\n");
      printf("3. Insertion at Specific Position\n");
      printf("Enter your Choice: ");
      scanf("%d", &option);
      switch (option)
      {
        int pos;
      case 1:
        insertAtEnd(a,&n);
        break;
      case 2:
        insertAtBeg(a, &n);
        break;
      case 3:
        printf("Enter the position: ");
        scanf("%d", &pos);
        insertAtPos(a, &n, pos);
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