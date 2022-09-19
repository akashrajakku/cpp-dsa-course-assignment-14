#include <stdio.h>
int sum(int t[]);
int main()
{
    int a[10],i;
    printf("Enter numbers of the array:");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    printf("Sum of numbers entered by you is %d",sum(a));
 return 0;
}
int sum(int t[10])
{
    int i,sum=0;
    for(i=0;i<=9;i++)
    sum=sum+t[i];
    return sum;
}
