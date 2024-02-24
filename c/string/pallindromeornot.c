#include<stdio.h>
#include<string.h>
int main(){
    char str1[10],s2[10];
    printf("Enter the string :");
    scanf("%s",str1);
    strcpy(s2 , str1);

    strrev(s2);
    printf("%s " , s2);
    if(strcmp(str1,s2)==0)
    printf("String is Pallindrome :");
    else
    printf("String is not pallindrome :");
    // printf(str1);
    return 0;
}