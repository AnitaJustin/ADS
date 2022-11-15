#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next, *prev;
};
struct node *head,*temp;
void ibeg()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&newnode->data);
    if(head==NULL)
    {
        head=newnode;
        newnode->next=NULL;
        newnode->prev=NULL;
    }
    else if(head->next==NULL)
    {
        newnode->next=head;
        head->prev=newnode;
        newnode->prev=NULL;
        head->next=NULL;
        head=newnode;
    }
    else
    {
        newnode->next=head;
        head->prev=newnode;
        newnode->prev=NULL;
        head=newnode;
    }
}
void ipos()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&newnode->data);
    int p,i;
    printf("enter the position:");
    scanf("%d",&p);
    temp=head;
    for(i=1;i<p-1;i++)
    {
      temp=temp->next;  
    }
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next->prev=newnode;
    temp->next=newnode;
}
void iend()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&newnode->data);
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
    newnode->next=NULL;
    
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
void main()
{
    int c;
    while(c!=5)
    {
        printf("-----Menu-----\n1.insertion at beginning\n2.insertion at position\n3.insertion at end\n4.display\n5.exit\nenter the choice:");
        scanf("%d",&c);
        switch(c)
        {
            case 1:ibeg();
            break;
            case 2:ipos();
            break;
            case 3:iend();
            break;
            case 4:display();
            break;
            case 5:exit(0);
            
        }
    }
    
}
