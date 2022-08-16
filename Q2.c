// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int  n[3][3],k[3][3],product[3][3];
   /*Counter variables for the loop*/
   int i, j;
   printf("Starting for n\n");
   for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &n[i][j]);
      }
   }
   printf("Starting for k\n");
   for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &k[i][j]);
      }
   }
   for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
         product[i][j] = n[i][j] * k[i][j];
      }
   }
   printf("product of the arrays is");
   for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
         printf("product for [%d][%d]:", i, j);
         printf("%d\n",product[i][j]);
      }
   }
   
   

    return 0;
}
