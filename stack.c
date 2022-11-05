#include <stdio.h>
#include <stdlib.h>
int a[20],i,max=6,top=-1;
void push()
{
    if (top==max-1)
    {
    printf("stack overflow");
    }
    else
    {
        top++;
        printf("enter the element to be inserted:");
        scanf("%d",&a[top]);
    }
}
void pop()
{
    if (top==-1)
    printf("stack underflow");
    else
    {
        printf("the popped element is: %d",a[top]);
	   top--;
    }
}
void display()
{
    printf("the stack elements are:");
    for(i=top;i>-1;i--)
    {
    printf("%d ",a[i]);
}
}
void main()
{
    int c;
while(c!=4)
{
printf("enter the choice\n1.insertion\n2.deletion\n3.display\n4.exit\n");
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