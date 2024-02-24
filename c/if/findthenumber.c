#include <stdio.h>
int main()
{
  int B,L,C,M,P,avg;
  printf ("Enter the value of B,L,C,M,P\n");
  scanf ("%d%d%d%d%d",&B,&L,&C,&M,P);
  avg =(B+L+C+M+P)/5;
  if (avg>30)
  {
    if (avg>=60)
    printf ("grade A");
    else if (avg>=45&&avg<60)
    printf ("grade B");
    else
    printf ("grade C");
  }
  else
  printf("Fail");

}