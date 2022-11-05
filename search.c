#include <stdio.h>
void main()
{
    int a[10],n,k,t=0,i;
    printf("enter the mnumber of elements of the array; ");
    scanf("%d",&n);
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to search");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            t++;
            printf("the element is found . the position is:%d",i+1);
            break;
        }
    }
    if(t!=1)
    printf("the element is not found");
    
}