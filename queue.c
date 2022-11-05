
#include <stdio.h>
#include <stdlib.h>
int front,rear,max=4,a[20],i;
void enqueue()
{
    if (rear==max-1)
    printf("queue overflow");
    else
    {
        if (front==-1)
        front++;
        
        rear++;
        printf("enter the element to be inserted:");
        scanf("%d",&a[rear]);
    }
}
void dequeue()
{
    if (front==-1)
    printf("stack underflow");
    else
    {
        front++;
    }
}
void display()
{
    printf("the queue  elements are:");
    for(i=front;i<rear+1;i++)
    {
    printf("%d ",a[i]);
}
}
int main() {
    int c; 
front=-1;
rear=-1;
max=4;
c=0;
while(c<4)
{
printf("enter the choice\n1.insertion\n2.deletion\n3.display\n4.exit\n");
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
