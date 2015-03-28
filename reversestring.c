#include<stdio.h>
#include<conio.h>

main(){
	
	char str[64], temp[64];
	int i, p, k=0, flag;
	printf("enter a string:\n");
	scanf("%s", str);
	printf("entered string is: %s\n", str);
    p = strlen(str);
    printf("%d\n", p);
    for(i=p-1;i>=0;i--){
    	temp[k] = str[i];
    	k++;
    }
    
    printf("%s\n", temp);
	}

