#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three sides of triangle :");
    scanf("%d%d%d",&a,&b,&c);
    if(b*b==a*a+c*c||a*a==b*b+c*c||c*c==a*a+b*b)
    {
        printf("It is the Right angle :");
    
    }
    else
    {
        printf("It is not a Right angle :");
    }
    return 0;
}