#include<stdio.h>
//Write a program to accept values and calculate simple Interest
int main() {
int p,r,t;
printf("enter the value of principle-\n");
scanf("%d",&p);
printf("enter rate of interest-\n");
scanf("%d",&r);
printf("enter the time period in term of year\n-");
scanf("%d",&t);
printf("so the simple interest is =%d",(p*r*t)/100);
return 0;

}