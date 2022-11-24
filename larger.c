#include<stdio.h>
//Take 3 user input and print largest and smallest number among them
int main()
{
	int a,b,c;
	printf("enter three numbers=\n");
	scanf("%d\n%d\n%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("larger number=%d\n",a);
		}
		else
		{
			printf("larger number=%d\n",c);
		}
	}
	else if(b>c)
	{
		printf("largernumber=%d\n",b);
	}
	else
	{
		printf("larger number=%d\n",c);
	}
	return 0;
}