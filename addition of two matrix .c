#include<stdio.h>
int main ()
{
    int a [3] [3]={{1,2,3},{4,5,6},{7,8,9}};
    int b [3] [3]={{1,4,7},{2,5,8},{3,6,9}};
    int i,j,c [3] [3];
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            c [i][j]=a[i][j]+b[i][j];
            printf ("%d ",c[i][j]);
            
        }
        {
            printf ("\n");
        }
    }
    return 0;
}