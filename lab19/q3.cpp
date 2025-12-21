#include<stdio.h>
#define ROW 4
#define COL 4


int check_dia(int arr[][COL]);
int isSymmetric(int arr[][COL]);
void display(int arr[][COL]);

int main(void){
    FILE *readFile;
    readFile = fopen("relation.txt","r");

    if(readFile==NULL){
        printf("no file found!");
    }

    else{
        int arr[ROW][COL] = {0};
        int n1,n2;
        
        while(fscanf(readFile,"%d %d",&n1,&n2)!=EOF){
            arr[n1-1][n2-1]=1;
        }
        printf("matrix of relation:\n");
        display(arr);

        int dia,symmetric;
        dia = check_dia(arr);
        symmetric = isSymmetric(arr);
        
        if(dia){
            printf("Relation is reflexive\n");
        }
        else{
            printf("Relation is NOT reflexive\n");
        }
        if(symmetric){
            printf("Relation is symmetric");
        }
        else{
            printf("Relation is NOT symmetric");
        }
        fclose(readFile);
    }


    return 0;
}

int check_dia(int arr[][COL]){
    for(int i=0;i<ROW-1;i++){
        if(arr[i][i]!=arr[i+1][i+1]){
            return 0;
        }
    }
    return 1;
}

int isSymmetric(int arr[][COL]){
    for(int i=0;i<ROW;i++){
        for(int j=0;j<COL;j++){
            if(arr[i][j]!=arr[j][i]){
                return 0;
            }
        }
    }
    return 1;
}

void display(int arr[][COL]){
    for(int i=0;i<ROW;i++){
        for(int j=0;j<COL;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}