//First come first serve

#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int id ;
    int at,bt,tat;
    int st,ct,wt;
}Process;

void stable_sort_of_arrival(Process p[] , int n){
    for(int i = 1 ; i< n ; i++){
        Process key = p[i];
        int j = i - 1;
        while(j >= 0 && p[j].at > key.at){
            p[j + 1] = p[j];
            j--;
        }
        p[j+1] = key;
    }
}
int main(){
    int n ;
    printf("Enter the number of processes : ");
    scanf("%d",&n);
    Process p[50];
    printf("Enter Arrival time and Burst Time for each Process : ");
    for(int i = 0 ; i< n ; i++){
        p[i].id = i + 1 ;
        printf("Process p %d(AT,BT) :",p[i].id);
        scanf("%d %d",&p->at,&p->bt);
    }
    stable_sort_of_arrival(p,n);
    double total_wt = 0 , total_tat = 0 ;
    int time = 0 ;
    for(int i = 0 ; i< n ; i++){
        if (time < p[i].at) time = p[i].at;
        p[i].st = time;
        p[i].ct = p[i].st + p[i].bt;
        p[i].tat = p[i].ct - p[i].at;
        p[i].wt = p[i].tat - p[i].bt;
        time = p[i].ct;
        total_wt += p[i].wt;
        total_tat = p[i].tat + total_tat ;
    }
    printf("\n========== GANTT CHART ==========\n");
    for (int i = 0; i < n; i++) {
    if (i > 0) printf(" | ");
        printf("%d -- P%d -- %d", p[i].st, p[i].id, p[i].ct);
    }
    printf("\n=================================\n");
    printf("\nProcess\tAT\tBT\tST\tCT\tTAT\tWT\n");
    for (int i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\t%d\n",
        p[i].id, p[i].at, p[i].bt,
        p[i].st, p[i].ct, p[i].tat, p[i].wt);
    }
    printf("\nAverage Waiting Time: %.2f\n", total_wt / n);
    printf("Average Turnaround Time: %.2f\n", total_tat / n);
    return 0;
}