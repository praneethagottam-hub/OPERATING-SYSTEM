#include <stdio.h>

int main()
{
    int bt[10], wt[10], tat[10], rem_bt[10];
    int n, tq;
    int i, time = 0, completed = 0;
    float awt = 0, atat = 0;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter the burst time of each process:\n");
    for (i = 0; i < n; i++)
    {
        printf("P%d: ", i + 1);
        scanf("%d", &bt[i]);
        rem_bt[i] = bt[i];   
    }

    printf("Enter the time quantum: ");
    scanf("%d", &tq);

    while (completed < n)
    {
        for (i = 0; i < n; i++)
        {
            if (rem_bt[i] > 0)
            {
                if (rem_bt[i] > tq)
                {
                    time += tq;
                    rem_bt[i] -= tq;
                }
                else
                {
                    time += rem_bt[i];
                    rem_bt[i] = 0;

                    tat[i] = time;               
                    wt[i] = tat[i] - bt[i];      
                    completed++;
                }
            }
        }
    }

    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++)
    {
        printf("P%d\t\t%d\t\t%d\t\t%d\n", i + 1, bt[i], wt[i], tat[i]);
        awt += wt[i];
        atat += tat[i];
    }

    awt /= n;
    atat /= n;

    printf("\nAverage Waiting Time = %.2f", awt);
    printf("\nAverage Turnaround Time = %.2f\n", atat);

    return 0;
}

