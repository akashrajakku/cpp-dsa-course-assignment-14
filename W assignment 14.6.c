#include <stdio.h>
void sort(int a[]);
int main()
{
    int a[10],i;
    printf("Enter numbers of the array:");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    sort(a);
return 0;
}
void sort(int a[10])
{
    int i,c;
    for (i=0;i<=9;i++)
    {
        if(a[i]>a[i+1])
        {
        c=a[i];
        a[i]=a[i+1];
        a[i+1]=c;
        printf("%d",a[i]);
        }
        else
      i++;
    }
    
}