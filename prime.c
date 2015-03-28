#include<stdio.h>
#include<math.h>

int main(){


  int num,i,count=0;

  printf("\nEnter any integer number :");
  scanf("%d",&num);

  for(i=2;i<=sqrt(num);i++){
        if(num%i==0){
           count++;
           break; //to exit from for loop
        }
  }

  if(count==0)
        printf("%d is a prime number",num);
  else
        printf("%d is not a prime number",num);

  return 0;
}
