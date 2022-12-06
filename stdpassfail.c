#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks of student(1-100)=");
    scanf("%d",&marks);
    if(marks>30)
    {
        printf("\n pass");
    }
    else
    printf("fail");
    return 0;
}