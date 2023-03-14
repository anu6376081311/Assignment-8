#include<stdio.h>
int main()
{
   int i,j;
   for(i=0;i<5;i++)
   {
       for(j=0;j<9;j++)
       {
           if(j>=4-i && j<=4+i)
            printf("*");
           else
            printf(" ");
       }
       printf("\n");
   }

   for(i=5;i<9;i++)
   {
       for(j=0;j<9;j++)
       {
           if(j>=i-4 && j<=12-i)
            printf("*");
           else
            printf(" ");
       }
       printf("\n");
   }
   return 0;
}

