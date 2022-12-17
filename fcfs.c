// program for fcfs scheduling algorithm without arrival time
#include<stdio.h>
int main()
{
    printf("\n FCFS(Without arrival time)");
    int b[4];
    int ct=0;
    int wt;
    float avgt=0,avgw=0;
    printf("\n enter cpu burst of p1,p2,p3,p4 process -");
    for(int i=1;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
      printf("\n process \tcpu burst \tcompletion time/TAT   waiting time");
     for(int i=1;i<=4;i++)
     {
         ct = ct + b[i];
         wt = ct - b[i];
          printf("\n P %d\t \t %d \t \t %d \t \t \t %d ",i,b[i],ct,wt);
          avgt= ct + avgt;
          avgw= wt + avgw;
     }
     avgt=avgt/4;
     avgw=avgw/4;
     printf("\n average turn arround time= %f \n average waiting time= %f",avgt,avgw);

    return 0;
}