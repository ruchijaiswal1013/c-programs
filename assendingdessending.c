#include<stdio.h>
//Take 3 user input and print them assending and dessending order
int main()
{
	int a,b,c;
	printf("enter three values=");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(b>c))
	{
		printf("dessending order - %d>%d>%d\n",a,b,c);
		printf("assending order - %d<%d<%d\n",c,b,a);
	}
	else if((a>b)&&(c>b))
	{
		printf("dessending order - %d>%d>%d\n",a,c,b);
		printf("assending order - %d<%d<%d\n",b,c,a);
	}
	else if((b>a)&&(a>c))
	{
		printf("dessending order - %d>%d>%d\n",b,a,c);
		printf("assending order - %d<%d<%d\n",c,a,b);
	}
	else if((b>a)&&(c>a))
	{
		printf("dessending order - %d>%d>%d\n",b,c,a);
		printf("assending order - %d<%d<%d\n",a,c,b);
	}
	else if((c>a)&&(a>b))
	{
		printf("dessending order - %d>%d>%d\n",c,a,b);
		printf("assending order - %d<%d<%d\n",b,a,c);
	}
	else if((c>a)&&(b>a))
	{
		printf("dessending order - %d>%d>%d\n",c,b,a);
		printf("assending order - %d<%d<%d\n",a,b,c);
	}
	
	return 0;
}