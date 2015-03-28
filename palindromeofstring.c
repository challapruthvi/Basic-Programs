#include<stdio.h>
#include<conio.h>

main(){
	
	char str[64];
	int i, p, flag;
	printf("enter a string:\n");
	scanf("%s", str);
	printf("entered string is: %s\n", str);
    p = strlen(str);
    printf("%d\n", p);
    for(i=0;i<p/2;i++){
    	if(str[i] != str[p-1-i])
    	flag = 0;
    }
    if(flag == 0){
    	printf("it is not a palindrome");
	} else
	printf("it is a palindrome");
	}

