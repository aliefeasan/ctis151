#include<stdio.h>

int fact(int n);
int comb(int n1,int n2);

int main(void) {
    for(int i=0;i<5;i++){
        for(int h=1;h<=5-i-1;h++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%d ",comb(i,j));
        }
        printf("\n");
    }

    return 0;
}
int fact(int n){
    int f=1;
    for(int i=2;i<=n;i++){
        f*=i;
    }
    return f;
}
int comb(int n1,int n2){
    int f1 = fact(n1);
    int f2=  fact(n2);
    int f3 = fact(n1-n2);
    return f1/(f2*f3);
}