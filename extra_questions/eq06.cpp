#include<stdio.h>

void printDirection(int degree);
int main(void){

    int degree=1;//to initilize
    while(degree>0){
        printf("Compass Reading? ");
        scanf("%d",&degree);
        
        if(degree>360){
            printf("INVALID! Enter another compass reading?");
            scanf("%d",&degree);
        }
        if(degree<0){
            break;
        }
        printDirection(degree);
    }

    return 0;
}
void printDirection(int degree){
    if(degree<=45||degree>315){
        printf("NORTH\n");
    }
    else if(degree<=135){
        printf("EAST\n");
    }
    else if(degree<=225){
        printf("SOUTH\n");
    }
    else if(degree<=315){
        printf("NORTH\n");
    }
}