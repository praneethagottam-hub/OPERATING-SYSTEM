#include<stdio.h>
void main()
{
int temp,j, bt[10],n,wt[4],tat[4],i,twt,ttat,p[4];
float awt,atat;
printf("Enter the no of process");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("enter process number");
	scanf("%d",&p[i]);
	printf("\n enter bt.");
	scanf("%d",&bt[i]);
	}
		for(i=0;i<n;i++){
		    for(int j=0;j<i;j++){
		     if(bt[i]<bt[j]){
		     temp=bt[i];
		     bt[i]=bt[j];
		     bt[j]=temp;
		     p[i]=p[j];
		     p[j]=temp;
		     }
		    }
		  }
	wt[0]=0;
	twt=0;
	tat[0]=bt[0];
	ttat=bt[0];
	for(i=1;i<n;i++)
	{
		wt[i]=wt[i-1]+bt[i];
		tat[i]=wt[i]+bt[i];
		twt=twt+wt[i];
		ttat=ttat+tat[i];
}
      awt=(float)twt/n;
      atat=(float)ttat/n;
      printf("\n process no., burst time,waiting time,turn around time");
      for(i=0;i<n;i++){
      printf("\n %d\t %d\t %d\t %d\t",p[i],bt[i],wt[i],tat[i]);
      }
      printf("\nawt ; %f",awt);
      printf("\natat ; %f",atat);
      }
      

