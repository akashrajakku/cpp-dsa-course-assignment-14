#include <stdio.h>
float avg(int t[]);
int main()
{
    int a[10],i;
    printf("Enter numbers of the array:");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    printf("Sum of numbers entered by you is %.2f",avg(a));
 return 0;
}
float avg(int t[10])
{
    int i;
    float sum=0,a;
    for(i=0;i<=9;i++)
    {
    sum=sum+t[i];
    }
    a=(sum/10.0) ;
    return a;
}
