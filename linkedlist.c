#include<stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head, *temp, *temp2, *temp3;
void insertionbegining()
{
    struct node *newnode;
    newnode=malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
void insertionatend()
{
    struct node *newnode;
    newnode=malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&newnode->data);
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=NULL;
}

 void insertionpos()
 {
     int k;
    struct node *newnode;
    newnode=malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&newnode->data);
    printf("enter the position");
    scanf("%d",&k);
    int i=2;
    temp=head;
  while(i<k)
  {
  if(temp->next != NULL) {
    temp = temp->next;
  }
}
    newnode->next=temp->next;
    temp->next=newnode;
    
 }
 void deletionbegining()
 {
     temp=head;
     head=head->next;
     free(temp);
     
 }
 void deletionend()
 {
     temp=head;
     while(temp->next->next!=NULL)
     {
         temp=temp->next;
     }
     temp2=temp->next;
     temp->next=NULL;
     free(temp2);
    
 }
 void deletionpos()
 {
     int k,i;
     printf("enter the position");
     scanf("%d",&k);
     temp=head;
     while(i<k)
     {
         temp=temp->next;
     }
     temp3=temp->next;
     temp->next=temp->next->next;
     free(temp3);
     
 }
void main()
{
    int c;
    while(c!=8)
    {
        printf("enter the choice\n1.insertion 2.end 3.position 4.deletionbegining 5.deletionend 6.deletion at position 7. display 8.exit");
        scanf("%d",&c);
        switch(c)
        {
          case 1:insertionbegining();
          break;
          case 2:insertionatend();
          break;
          case 3:insertionpos();
          break;
          case 4:deletionbegining();
          break;
          case 5:deletionend();
          break;
          case 6:deletionpos();
          break;
          case 7:display();
          break;
          case 8:
          exit(0);
        }
    }
}