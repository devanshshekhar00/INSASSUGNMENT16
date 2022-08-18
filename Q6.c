// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int sor = 0,soc=0,rows,columns;
   printf("Enter rows\n");
   scanf("%d",&rows);
   printf("Enter columns\n");
   scanf("%d",&columns);
   int k[rows][columns];int a = rows*columns;int b = a-1;
   int i,j;
   printf("Initiating input ....\n");
   for(i = 0; i < rows;i++)
   {
       for(j=0;j<columns;j++)
       {
           printf("enter element for [%d][%d]\t",i,j);
           scanf("%d",&k[i][j]);
       }
   }
   for(i = 0; i < rows;i++)
   {
       for(j=0;j<columns;j++)
       {
           sor = sor + k[i][j];
           soc = soc + k[j][i];
          if(j == columns - 1) 
          {
              printf("Sum for row number %d is %d \n",i,sor);
              sor = 0;
              
              printf("Sum for column number %d is %d \n",i,soc);
              soc = 0;
          }
       }
   }
   

    return 0;
}
