#include <stdio.h>

int main() {
  int rows,columns;
  printf("Enter rows\n");
  scanf("%d",&rows);
  printf("Enter columns\n");
  scanf("%d",&columns);
  int disp[rows][columns];
   /*Counter variables for the loop*/
   int i, j;
   for(i=0; i<rows; i++) {
      for(j=0;j<columns;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);
      }
   }
   for(i=0; i<rows; i++) {
      for(j=0;j<columns;j++) {
         if(i+j == i*j-1 ) printf("Right diagnal %d",disp[i][j]);
      }
   }
   
  
   
    

    return 0;
}
