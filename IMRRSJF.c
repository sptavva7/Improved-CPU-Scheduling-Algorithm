#include<stdio.h>
int count,j,n,time,remain,flag=0,time_quantum;
int i,pos;
int wait_time=0,turnaround_time=0,at[10],bt[10],rt[10],p[10],sum=0;
void sort()
{
for(i=0;i<n-1;i++)
 {
 pos=i;
 for(j=i+1;j<n;j++)
 {
 if(bt[j]<bt[pos])
 pos=j;
 }
 int temp=bt[i];
 bt[i]=bt[pos];
 bt[pos]=temp;
 temp=at[i];
 at[i]=at[pos];
 at[pos]=temp;
 temp=p[i];
 p[i]=p[pos];
 p[pos]=temp;
 rt[i]=bt[i];
 }
 rt[n-1]=bt[n-1];at[0]=0;
}
int main()
{ int cs=0;
 printf("Enter Total Process:\t ");
 scanf("%d",&n);
 remain=n;
 for(count=0;count<n;count++)
 {
 printf("Enter Arrival Time and Burst Time for Process Process Number %d
:",count+1);
 scanf("%d",&at[count]);
 scanf("%d",&bt[count]);
p[count]=count;
 }
sort();
 for(i=0;i<n; i++)
 {
 sum=sum+bt[i];
 }
 sum=sum*bt[n-1];
 sum=sqrt(sum/n);
 printf("\n\nProcess\t|Turnaround Time|Waiting Time\n\n");
 for(time=0,count=0;remain!=0;cs++)
 {
 sort();
 time_quantum=sum;
 printf("\n\n time quantum %d \n\n",time_quantum);
 if(rt[count]<=time_quantum && rt[count]>0)
 {
 time+=rt[count];
 rt[count]=0;
 flag=1;
 }
 else if(rt[count]>0)
 {
 rt[count]-=time_quantum;
 time+=time_quantum;
 }
 if(rt[count]==0 && flag==1)
 {
 remain--;
 printf("P[%d]\t|\t%d\t|\t%d\n",count,time-at[count],time-at[count]-
bt[count]);
 wait_time+=time-at[count]-bt[count];
 turnaround_time+=time-at[count];
 flag=0;
 }
 if(count==n-1)
 count=0;
 else if(at[count+1]<=time)
 count++;
 else
 count=0;
 }
 printf("\nAverage Waiting Time= %f\n",wait_time*1.0/n);
 printf("Avg Turnaround Time = %f",turnaround_time*1.0/n);
 printf("\nContext Switches = %d",cs);
 return 0;
}
