#include<stdio.h>
int main(){
int n,i;
int bt[10],wt[10],tat[10];
printf("enter no.of processes");
scanf("%d",&n);
printf("enter burst time");
for(int i=0;i<=n;i++){
scanf("%d",&bt[i]);}
wt[0]=0;
for(int i=0;i<=n;i++)
wt[i] = wt[i-1]+bt[i-1];
for(int i=0;i<=n;i++)
tat[i]=wt[i]+bt[i];
printf("\n process \tbt,\twt,\ttat\n");
for(int i=0;i<=n;i++)
printf("p%d \t%d \t%d \t%d \n",i+1,bt[i],wt[i],tat[i]);
return 0;

}


