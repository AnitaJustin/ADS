#include<stdio.h>
void main()
{
    int n,i,m,temp;
    printf("enter the size of the first array:");
    scanf("%d",&n);
    int a[20];
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("enter the size of the second array:");
    scanf("%d",&m);
    int b[20];
    printf("enter the elements\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
      for(i=0;i<m;i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\n");
    for(i=0;i<m;i++)
    {
        printf("%d\t",b[i]);
    }
    
}
