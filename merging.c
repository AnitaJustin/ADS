#include<stdio.h>
void main()
{
    int a[10],b[10],n,m,i;
    printf("enter the elements of first array:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    printf("enter the elements of second array:");
    scanf("%d",&m);
    printf("enter the elements of array:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
        
    }
    for(i=0;i<m;i++)
    {
        a[n+i]=b[i];
    }
    printf("the merged array is:");
    for(i=0;i<n+m;i++)
    {
        printf("%d",a[i]);
    }
}