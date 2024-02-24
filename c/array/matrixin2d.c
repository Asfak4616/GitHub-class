#include<stdio.h>
int main()
{
    int m,n,i,j,a[10][10];
    printf("Enter the value of row size and column size :");
    scanf("%d%d",&m,&n);
    printf("Enter array element\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;i++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("output matrix :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;i<n;i++);
        {
            printf("%d\t",a[i][j]);
            {
                printf("\n");
                
            }
        }
    }
}
