
#include <stdio.h>

int main() {
    int  n[3][3],k[3][3],sum[3][3];
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
         sum[i][j] = n[i][j] + k[i][j];
      }
   }
   printf("sum of the arrays is");
   for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
         printf("sum for [%d][%d]:", i, j);
         printf("%d\n",sum[i][j]);
      }
   }
   
   

    return 0;
}
