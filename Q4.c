#include <stdio.h>

int main() {
   int sum = 0,rows,columns;
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
           if(i*j == b ) sum += k[i][j];
       }
   }
   printf("Sum is %d",sum);

    return 0;
}
