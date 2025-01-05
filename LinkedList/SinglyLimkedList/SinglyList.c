#include<stdio.h>
#include<stdlib.h>
#include"SinglyList.h"

node head = NULL;
void main(){
  int choice,option,pos;
  head = insertAtEnd(head);
  head = insertAtEnd(head);
  head = insertAtPos(head);
  Traverse(head);
  // do
  // {
  //   printf("Choose your Operation to perform:\n");
  //   printf("1. Traverse\n");
  //   printf("2. Insertion\n");
  //   printf("3. Deletion\n");
  //   printf("4. Exit\n");
  //   printf("Enetr your choice 1 or 2 or 3 or 4: ");
  //   scanf("%d", &choice);
  //   switch (choice)
  //   {
  //   case 1:
  //     // TraversalList();
  //     break;
  //   case 2:
  //     printf("\nTypes of insertion\n");
  //     printf("1. Insertion at Ending\n");
  //     printf("2. Insertion at Beggining\n");
  //     printf("3. Insertion at Specific Position\n");
  //     printf("Enter your Choice: ");
  //     scanf("%d", &option);
  //     switch (option)
  //     {
  //       int pos;
  //     case 1:
  //       // insertAtEnd(head);
  //       break;
  //     case 2:
  //       head = insertAtBeg(head);
  //       break;
  //     case 3:
  //       printf("Enter the position: ");
  //       scanf("%d", &pos);
  //       // insertAtPos(a, &n, pos);
  //       break;
  //     default:
  //       printf("Enter correct value: ");
  //       break;
  //     }
  //     break;
  //   default:
  //     break;
  //   }
  // } while (choice != 4);
  
  
}