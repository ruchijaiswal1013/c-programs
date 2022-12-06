//write a program tp find if a character entered by user is upper
#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character (a to z)");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("\n upper case");
    }
    else if(ch>='a'&& ch<='z')
    {
        printf("\n lower case");
    }
    else
    {
        printf("\n not english");
    }
    return 0;
}