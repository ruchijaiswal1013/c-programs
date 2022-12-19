#include<stdio.h>
int main(){
    int n,fib =1,prev=1, temp =0;

    printf("\n enter the number");
    scanf("%d",&n);  
    if(n==0)
{
  printf(" \n not valid input");
  return 0;
}

     printf("\n fib series from start to %dth term is :",n);  
if(n==1)
{
  printf("\n %d",prev-1);
}
else if(n==2)
{
  printf("\n %d \t %d",prev-1,prev);
}
 else{
printf("\n\t %d \t %d",prev-1,prev);
 printf("\t %d",fib);
for(int i=1;i<=n-3;i++)
{
  temp=fib;
  fib=fib+prev;
  prev=temp;

printf("\t %d",fib); 
}
}
return 0;
}