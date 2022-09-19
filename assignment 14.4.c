#include <stdio.h>
void grnum(int a[]);
int main()
{
    int a[10],i;
    printf("Enter numbers of the array:");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    grnum(a);
return 0;
}
void grnum(int a[10])
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
    printf("largest number of array is %d\n",a[10]);
}
