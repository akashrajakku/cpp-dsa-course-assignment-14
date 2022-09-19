#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[n],i,c;
    printf("Enter value of array:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
    c=a[i];
    a[i]=a[(n-1)-i];
    a[(n-1)-i]=c;
    printf("%d",a[i]);
    }
return 0;
}