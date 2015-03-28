#include<stdio.h>
#include<conio.h>

int main()
{
	int n, fib2, i;
	int fib0 = 0;
	int fib1 = 1;
	printf("enter the number upto which fibnocci should be printed:\n");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		if(i<=1)
		fib2 = i;
		else
		{
		fib2 = fib0 + fib1;
		fib0 = fib1;
		fib1 = fib2;
	}
		printf("%d\t", fib2);
}
}
