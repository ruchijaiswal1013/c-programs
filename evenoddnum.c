#include<stdio.h>
//Write a program to check user input is even or add
int main()
{
	int num;
	printf("enter num=\n");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("num is even");
	}
	else
		printf("num is odd");
	return 0;
}