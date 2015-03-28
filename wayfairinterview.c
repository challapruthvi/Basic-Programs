#include<stdio.h>

int main(){
	int a, b, temp, i, j;
	
	printf("ennter two elements into the function");
	scanf("%d %d", &a, &b);
	temp = a + 1;
	for(i=a;i<=b;i++)
	printf("%d\t", i);
	printf("\n");
	for(i=a+1;i<=b;i++){
		printf("%d\t", i);
		for(j=a+1;j<=b;j++){
			
			printf("%d\t", (i*j));
			
		}
		printf("\n");
	}
	
}
