#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};

#define node struct node *

node insertAtBeg(node head){
  int item;
  node temp = (node)malloc(sizeof(node));
  printf("Eneter the element: ");
  scanf("%d", &item);
  temp->data = item;
  temp->next = head;
  return temp;
}

node insertAtEnd(node head){
  int item;
  node temp = head;
  printf("Eneter the element: ");
  scanf("%d", &item);
  node newnode = (node)malloc(sizeof(node));
  newnode->data = item;
  newnode->next = NULL;
  if(temp != NULL){
  while (temp->next!=NULL)
  {
    temp = temp->next;
  }
  temp->next = newnode;
  }
  else
  {
    temp = newnode;
  }
  return temp;
}

void Traverse(node head){
  node temp = head;
  while (temp != NULL)
  {
    printf("%d ", temp->data);
    temp = temp->next;
     }
     
}