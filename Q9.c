#include <stdio.h>

int main() {
   int rows,columns,w=0;
   printf("Enter rows\n");
   scanf("%d",&rows);
   printf("Enter columns\n");
   scanf("%d",&columns);
   int k[rows][columns];int a = rows*columns;
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
       for(j=0;j < columns;j++)
       {
           if(k[i][j] == 0) w++;
         
         
         
       }
   }
   
   if(w>a/2) printf("Sparse matrix");
   else printf("Not a sparse matrix");
