#include<stdio.h>
void main()
{
    int a[15], i, n,j,temp;
    printf("enter the number of elements in array");
    scanf("%d",&n);
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("the sorted array is:");
     for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}