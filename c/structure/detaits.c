#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

    struct bca
    {
        int roll;
        char name[50];
        float marks;
    };
    struct bca vu;
    int main()
    {
        struct bca vu;
        printf("enter the value of roll\n:");
        scanf("%d",&vu.roll);
        printf("enter the  name:\n");
        scanf("%s",vu.name);
        printf("enter the value of marks:\n");
        scanf("%f",&vu.marks);
        printf("student details are:\n");
        printf("ROLL=%d\n",vu.roll);
        printf("NAME=%s\n",vu.name);
        printf("MARKS=%f\n",vu.marks);
