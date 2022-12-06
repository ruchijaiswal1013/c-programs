#include<stdio.h>
int main()
{
   int number;
   printf("\n enter number:");
   scanf("%d",&number);
   if(number >= 0)
   {
    printf("\n positive");
    if(number % 2==0)
    {
        printf("\n even");
    } 
    else
    {
        printf("\n odd");
    }
   }
   else
   {
    printf("\n negative");
   }
    return 0;
}