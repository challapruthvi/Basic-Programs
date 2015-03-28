#include<stdio.h>

int main(){
  int length,i,j,k;

 //Accepting length from user
  printf("Enter the length of pascal's triangle : ");
  scanf("%d",&length);

 //Printing the pascal's triangle
  for(i=1;i<=length;i++) {
            for(j=1;j<=length-i;j++)
                        printf(" ");
            for(k=1;k<i;k++)
                        printf("%d",k);
            for(k=i;k>=1;k--)
                        printf("%d",k);
            printf("\n");
  }

  return 0;
}
