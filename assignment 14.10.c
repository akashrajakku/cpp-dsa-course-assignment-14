#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter size of array :");
    scanf("%d",&n);
    printf("Enter element of array :");
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int b[n];
    for(i=0;i<n;i++)
    {
    b[i]=a[i];
    printf("%d ",b[i]);
    }
return 0;
}