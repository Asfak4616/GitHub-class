#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int i,p,len;
    printf("Enter your name :\n");
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]=='\0 ')
        {
            p=i;
            break;
        }
    }
for(i=p+1;i<len;i++)
printf("%c",str[i]);
printf(" \b ");
for(i=0;i<p;i++)
printf("%c",str[i]);
}

