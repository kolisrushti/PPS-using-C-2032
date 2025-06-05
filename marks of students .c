#include<stdio.h>
int main ()
{
   int marks[5],i;
   for(i=0;i<5;i++)
   {
      printf ("Enter marks of %d student,i+l");
      scanf ("%d",& marks [i]);
   }
   for (i=0;i<5;i++)
   {
       printf ("marks of %d are %d",i+1,marks[i]);
       
   }
   return 0;
}
    