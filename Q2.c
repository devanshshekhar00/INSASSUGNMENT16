// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int k[3][3],f[3][3];
   printf("Initiating input for k\n");
   int i,j;
   for( i = 0; i < 3;i++)
   {
       for( j = 0; j < 3;j++)
       {
           printf("Enter input for [%d][%d]\t",i,j);
           scanf("%d",&k[i][j]);
           
       }
   }
    printf("Initiating input for f\n");
    for( i = 0; i < 3;i++)
   {
       for( j = 0; j < 3;j++)
       {
           printf("Enter input for [%d][%d]\t",i,j);
           scanf("%d",&f[i][j]);
           
       }
   }
    for( i = 0; i < 3;i++)
   {
       for( j = 0; j < 3;j++)
       {
           printf("sum for  [%d][%d] is %d\n",i,j,k[i][j]*f[i][j]);
           
           
       }
   }
   

    return 0;
}
