#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int size,n;
struct node *top, *temp;
void push()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nenter the data");
    scanf("%d",&newnode->data);
    if(size==n)
    {
    printf("stack overflow");
    }
    else if(size==0)
    {
        top=newnode;
        top->next=NULL;
        size++;
    }
    else
    {
        temp=top;
        top=newnode;
        newnode->next=temp;
        size++;
    }
}
void pop()
{
    if(size==0)
    printf("stack underflow");
    else
    {
        temp=top;
        top=top->next;
        free(temp);
    }
}
void display()
{
    temp=top;
    while(temp->next!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    printf("%d", temp->data);
}
void main()
{
    int c;
    size=0;
    printf("enter the size of stack");
    scanf("%d",&n);
    while (c!=4)
    {
        printf("enter the coice\n1.push\n2.pop\n3.display\n.4.exit\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:exit(0);
        }
    }
    
}