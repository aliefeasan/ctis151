#include <stdio.h>
#include <math.h>

double fact(int n);
int main(void){
    int y;
    do{
        printf("enter the value of y:");
        scanf("%d",&y);
    }while(y==-1);
    int sign = -1;
    double sum = 0.;
    int p = 15;
    for(int i=2;i<=14;i+=2){
        sum += sign*(fact(i)/pow(y+1,1.0/p));
        p-=2;
        sign*=-1;
    }
    printf("result: %f",sum);
    return 0;
}
double fact(int n){
    double f = 1;
    for(int i=2;i<=n;i++){
        f *= i;
    }
    return f;
}