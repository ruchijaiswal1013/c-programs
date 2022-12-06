#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks=");
    scanf("%d",&marks);
    if(marks<30)
    {
        printf("\n grade is c");
    }
    else if(marks>=30&&marks<70)
    {
        printf("\n grade is b");
    }
  else if(70<=marks && marks<90)
    {
        printf("\n grade is a");
    }
    else if(marks<=100 && marks>=90)
    {
        printf("grade is awesome");
    }
    return 0;
}