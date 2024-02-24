#include<stdio.h>
#include<string.h>
int main(){
    char str1[50];
    int l,i;
    printf("Enter the value of String :");
    gets(str1);
    l=strlen(str1);
    printf("%c",str1[0]);
    for(i=1;i<=l;i++)
    {
        if(str1[i]==' ')
        {
            printf("%c",str1[i+1]);
        }
    }
return 0;
}