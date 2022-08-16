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
   int transpose[columns][rows];
   for(i=0; i<rows; i++) {
      for(j=0;j<columns;j++) {
        transpose[j][i] = disp[i][j];
      }
   }
   for(i=0; i<columns; i++) {
      for(j=0;j<rows;j++) {
         printf("element [%d][%d] ",i,j);
         printf("%d",transpose[i][j]);
      }
   }
   
    

    return 0;
}
