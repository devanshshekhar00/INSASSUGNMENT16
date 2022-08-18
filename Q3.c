#include <stdio.h>

int main() {
   int rows,columns;
   printf("Enter rows\t");
   scanf("%d",&rows);
   printf("Enter columns\t");
   scanf("%d",&columns);
   int k[rows][columns];
   int i,j;
   for(i = 0;i<rows;i++)
   {
       for(j = 0; j<columns;j++)
       {
           printf("Enter element at[%d][%d]\t",i,i);
           scanf("%d",&k[i][j]);
       }
   }
   int t = rows;
   rows = columns;
   columns = t;
   int transpose[rows][columns];
   for(i = 0;i<rows;i++)
   {
       for(j = 0; j<columns;j++)
       {
           transpose[i][j] = k[j][i];
       }
   }
   for(i = 0;i<rows;i++)
   {
       for(j = 0; j<columns;j++)
       {
           printf("Transpose elements for[%d][%d] is %d\n",i,j,transpose[i][j]);
           
       }
   }

    return 0;
}
