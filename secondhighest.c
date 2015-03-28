#include<stdio.h>

int main()

{

int a[]={2,1,6,5,4,8};
int max, i,sec_max;
	if(a[1]<a[0])
	{
	max=a[0];
	sec_max=a[1];
	}
else
{
max=a[1];
sec_max=a[0];
}

for(i=2;i<6;i++)
{
if(a[i]>max)
{
sec_max=max;
max=a[i];
}
if(a[i]<max && a[i]>sec_max)
{
sec_max=a[i];
}
}

printf("Second largest element is %d",sec_max);

}
