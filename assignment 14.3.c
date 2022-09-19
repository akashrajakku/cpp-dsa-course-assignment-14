#include <stdio.h>
void sumeven(int t[]);
int main()
{
    int a[10],i;
    printf("Enter numbers of the array:");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    sumeven(a);
return 0;
}
void sumeven(int a[10])
{
    int i,sum1=0,sum2=0;
    for (i=0;i<=9;i++)
    {
        if(a[i]%2==0)
        sum1=sum1+a[i];
        else
        sum2=sum2+a[i];
    }
    printf("Sum of even number entered by you is %d\n",sum1);
    printf("Sum of odd number entered by you is %d",sum2);
}