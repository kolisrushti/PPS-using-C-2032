#include<stdio.h>
int main()
{
  int a,b,c;
  printf ("enter the value of a:");
  scanf("%d",&a);
  
  printf ("\ninitially value of a is %d",a);
  printf ("\ninitially value of b is %d",b);
  
  a=a+b;
  b=a-b;
  a=a-b;
  
  printf ("\ninterchanged value of a is %d",a);
  printf ("\ninterchanged value of b is %d",b);
  return 0;
}  