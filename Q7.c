// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int rows,columns;
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
       for(j=0;j<i+1;j++)
       {
         if(j == i) printf("%d\n",k[i][j]);
         else printf("%d\t",k[i][j]);
       }
   }
   

    return 0;
}
