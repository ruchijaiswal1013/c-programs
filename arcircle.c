#include<stdio.h>
//Write a program to accept radius from user and calculate the area and perimeter of cicrle 
int main() {
	int r;
	float a,p;
	printf("enter the value of radious=\n");
	scanf("%d",&r);
	a=3.14*r*r;
	printf("area of circle=%f\n",a);
	p=2*3.14*r;
	printf("and the perimeter of the circle is =%f\n",p);
	return 0;
}