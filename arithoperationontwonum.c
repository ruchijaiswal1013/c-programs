#include<stdio.h>
//Write a program to accept values to two numbers and perform (+ , -, *, %, /) print result
int main() {
int a,b;
printf("enter the number a and b \n");
scanf("%d %d/n",&a,&b);
printf("sum=%d\n",a+b);
printf("sub=%d\n",a-b);
printf("mul=%d\n",a*b);
printf("reminder=%d\n",a%b);
printf("devision=%d\n",a/b);
return 0;
}