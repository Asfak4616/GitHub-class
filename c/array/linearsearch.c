#include<stdio.h>
int main()
{
    int a[20],n,i,key;
    printf("Enter the value of n :");
    scanf("%d",&n);
    printf("Enter the array element :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter search item \n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            printf("Search is successful\n");
            printf("position=%d",i+1);
            break;
        }
    }
if(key!=a[i])
{
    printf("Search is Unsuccessful");
}
    return 0;
    }
