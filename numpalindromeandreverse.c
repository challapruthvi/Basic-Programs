#include<stdio.h>
#include<conio.h>

main()
{
	int num, temp, rev=0, rem;
	printf("Enter your fav num\n");
	scanf("%d", &num);
	printf("entered number is: %d\n", num);
	temp = num;
	while(temp!= 0){
		rem = temp % 10;
		rev = (rev * 10) + rem;
		temp = temp/10; 
	}
	if(rev == num){
		printf("it is a palindrome number\n");
		printf("reverse of given number is: %d", rev);
	}
	else
	{
		printf("it is not a palindrome number\n");
		printf("reverse of given number is: %d", rev);
	}
}
