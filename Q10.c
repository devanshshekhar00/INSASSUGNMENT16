// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int rows,columns,w=0;
   printf("Enter rows\n");
   scanf("%d",&rows);
   printf("Enter columns\n");
   scanf("%d",&columns);
   int k[rows][columns];int a = rows*columns;
   int i,j;int ones[rows];
   printf("Initiating input ....\n");
   for(i = 0; i < rows;i++)
   {
       for(j=0;j<columns;j++)
       {
           printf("enter element for [%d][%d]\t",i,j);
           scanf("%d",&k[i][j]);
       }
   }
   
   int maxOnes = -9999;
   int rowNumber;
   
   for(i = 0; i < rows;i++)
   {
       int countOnes = 0;
       
       for(j=0;j < columns;j++)
       {
           if(k[i][j] == 1) countOnes++;
       }
       
       if(countOnes > maxOnes)
       {
           maxOnes = countOnes;
           rowNumber = i;
       }
   }
   
   printf("max ones are in %d", rowNumber);

    return 0;
}
