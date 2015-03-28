#include<stdio.h>

int main(){
	int arr[64][64];
	int m, n, i, j;
	printf("enter the num of rows and columns:\n");
	scanf("%d %d", &m, &n);
	
	printf("enter the elements:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	printf("the enetered elements are:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");          
	}
	
	if()
}
