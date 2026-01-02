#include <stdio.h>
#include <math.h>

int main(void){

    int x;
    
    printf("Enter x (other than 5):");
    scanf("%d",&x);
    if(x==5){
        do{
            printf("Division by zero! Please reenter x:");
         scanf("%d",&x);
        }while(x==5);
    }

    int sign = -1;
    double sum=0.;
    int power=4;
    for(int i=3;i<=30;i+=3){
        sum += sign*(1.0*i/pow(x-5,power));
        power+=3;
        sign*=-1;
    }
    printf("result: %f",sum);
    return 0;
}