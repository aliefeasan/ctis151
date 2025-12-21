#include<stdio.h>

void drawStairs(int steps,int length);
int main(void){

    int numberOfSteps,lengthOfSteps;

    do{
        printf("Enter the number of steps (2 - 10):");
        scanf("%d",&numberOfSteps);
    }while(numberOfSteps<1||numberOfSteps>10);

    do{
        printf("Enter the step length: (3 - 10):");
        scanf("%d",&lengthOfSteps);
    }while(lengthOfSteps<3||lengthOfSteps>10);

    drawStairs(numberOfSteps,lengthOfSteps);

    return 0;
}
void drawStairs(int steps,int length){
    for(int i=1;i<=steps;i++){
        for(int j=1;j<=length;j++){
            printf("* ");
        }
        printf("\n");
        for(int h=1;h<=i*(2*(length-1));h++){
            printf(" ");
        }
        printf("*\n");
        for(int h=1;h<=i*(2*(length-1));h++){
            printf(" ");
        }
        if(i==steps){
            printf("*");
        }
    }
}