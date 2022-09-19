#include <stdio.h>
void smnum(int a[]);
int main()
{
    int a[10],i;
    printf("Enter numbers of the array:");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    smnum(a);
return 0;
}
void smnum(int a[10])
{
    int i,c;
    for (i=0;i<=9;i++)
    {
        if(a[i]>a[i+1])
        {
        c=a[i];
        a[i]=a[i+1];
        a[i+1]=c;
        }
        else
      i++;
    }
    printf("Second smallest number of array is %d\n",a[1]);
}