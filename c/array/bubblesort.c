#include<stdio.h>
int main(){
    int a[50],n,i,t,j;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the array element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
    for(j=0;j<n-i-1;j++)
    {
     if(a[j]>a[j+1])
    {
    t=a[j];
    a[j]=a[j+1];
    a[j+1]=t;
    }
    }
    }
    printf("After sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
