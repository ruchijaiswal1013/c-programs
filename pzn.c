#include<stdio.h>
//Take user input and check whether it is positive negative or zero
int main()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	if(num>0)
	{
		printf("%d is positive",num);
	}
	else if(num==0)
	{
		printf("%d is zero",num);
}
else if(num<0)
{
	printf("%d is negative",num);
}
return 0;
}