#include<stdio.h>
int main(){
    int n;
    printf("Enter the rows :");
    scanf("%d",&n);
    int m;
    printf("Enter the column :");
    scanf("%d",&m);
    for( int i=1;i<=n;i++){
        for(int i=1;i<=m;i++){
            printf("*");
        }
        printf("\n");//line ka bad enter marna hai
    }
}