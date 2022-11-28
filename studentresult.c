#include<stdio.h>
#include<conio.h>
//Program to take subject and marks from user and print total marks , grade and average "Phy-80,Chem-87 ,Maths-99"
int main()
{
int phy =80,chem =87 , maths =99;
int t =(phy+chem+maths);
float g,a;
g=t/3.0;
a=t/3.0;
printf("marks list \n physics=%d\n chem=%d\n maths=%d\n",phy,chem,maths);
printf("total marks=%d\n",t);
printf("\n grade=%f \n",g);
printf("average=%f",a);
return 0;
}

