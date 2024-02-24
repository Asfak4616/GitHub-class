#include<stdio.h>
int main(){
    int a[10],n,i;
    printf("\n Enter the how many elements :");
    scanf("%d",&n);
    printf("\n Enter element one by one :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\n display element one by one :");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }

}