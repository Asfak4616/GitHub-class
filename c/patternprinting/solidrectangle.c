#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    for (int i=1;i<=3;i++){//outer loop->no of lines
    for( int i=1;i<=n;i++){//liner loop->no of stars in each line
        printf("*");
    }
    printf("\n");
    }
}