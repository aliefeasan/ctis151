#include<stdio.h>

#define MAX 10

void findRowSums(int array[][MAX],int sumR[],int n);
void findColSums(int array[][MAX],int sumC[],int n);
void display(int array[][MAX]);
void rowDominants(int array[][MAX],int sumR[],int sumC[],int n);

int main(void){

    int n=0;
    while(n<1||n>10){
        printf("enter n:");
        scanf("%d",&n);
    }
    int array[n][MAX];
    printf("enter the elements of %dx%d matrix:",n,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&array[i][j]);
        }
    }
    int rowSum[n]={0},columnSum[n]={0};
    findRowSums(array,rowSum,n);
    findColSums(array,columnSum,n);
    rowDominants(array,rowSum,columnSum,n);

    return 0;
}

void findRowSums(int array[][MAX],int sumR[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sumR[i]+=array[i][j];
        }
    }
}

void findColSums(int array[][MAX],int sumC[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sumC[i]+=array[j][i];
        }
    }
}

void rowDominants(int array[][MAX],int sumR[],int sumC[],int n){
    int counter;
    for(int i=0;i<n;i++){
        counter=0;
        for(int j=0;j<n;j++){
            if(sumR[i]>sumC[j]){
                counter++;
            }
        }
        if(counter==n){
            printf("row %d is dominanat(sum=%d)\n",i+1,sumR[i]);
        }
    }
}