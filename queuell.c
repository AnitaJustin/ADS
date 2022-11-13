#include<stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *temp;
struct node *front, *rear;
void enqueue()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&newnode->data);
    if (front==NULL)
    {
        front=rear=newnode;
        newnode->next=NULL;
    }
    
    else
    {
    rear->next=newnode;
    newnode->next=NULL;
    rear=newnode;
    }
    
}
void dequeue()
{
    if (front==NULL)
    printf("queue underflow");
    else
    {
    temp=front;
    front=front->next;
    free(temp);
    }
    
}
void display()
{
    temp=front;
    while(temp->next!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}
void main()
{
    int c;
    while(c!=4)
    {
        printf("\nenter the choice\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:enqueue();
            break;
            case 2:dequeue();
            break;
            case 3:display();
            break;
            case 4:exit(0);
        }
    }
}