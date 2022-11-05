#include<stdio.h>
void main()
{
    int a[10],b[10],c[20],n,i,j;
    printf("enter the number of elements of array:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    printf("enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        
    }
    for(i=0,j=0;i<n||j<n;i=i+2,j++)
    {
        c[i]=a[j];
        c[i+1]=b[j];
    }
    printf("the merged array is:");
    for(i=0;i<(n+n);i++)
    {
        printf("%d\t" , c[i]);
    }
}