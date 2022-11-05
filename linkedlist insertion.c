#include<stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head, *temp;
void begining()
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
void end()
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

 void pos()
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
void main()
{
    int c;
    while(c!=5)
    {
        printf("enter the choice\n1.insertion 2.end 3.position 4.display 5.exit");
        scanf("%d",&c);
        switch(c)
        {
          case 1:begining();
          break;
          case 2:end();
          break;
          case 3:pos();
          break;
          case 4:display();
          break;
          case 5:
          exit(0);
        }
    }
}
