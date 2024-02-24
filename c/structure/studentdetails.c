#include<stdio.h>
struct BCA{

    int roll;
    char name[50];
    float marks;
};
void main() 
{
    struct BCA VU;
    printf("Enter the value of roll,name,marks\n");
    scanf("%d",&VU.roll);
    gets(VU.name);
    sacnf("The student details are \n");
    printf("%d",VU.roll);
    puts(VU.name);
    printf("%f",VU.marks);
    return 0;
}