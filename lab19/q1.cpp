#include <stdio.h>

#define MAX 50//firstly,we dont know how much big array is

int readFromFile(FILE *readFile,int arr1[],int arr2[]);
int isRelPrime(int number1,int number2);
int findRelPrimes(int arr1[],int arr2[],int size,int arr3[]);

int main() {
    FILE *readFile;
    readFile = fopen("nums2.txt","r");

    int arr1[MAX],arr2[MAX],arr3[MAX];

    int sizeOfArrays,numberOfRelPrime;

    sizeOfArrays = readFromFile(readFile,arr1,arr2);
    numberOfRelPrime = findRelPrimes(arr1,arr2,sizeOfArrays,arr3);

    printf("there are %d relatively prime numbers in the arrays\n",numberOfRelPrime);
    for(int i=0;i<numberOfRelPrime;i++) {
        printf("%d\t%d\n", arr1[arr3[i]], arr2[arr3[i]]);
    }

    return 0;
}

int readFromFile(FILE *readFile, int arr1[], int arr2[]) {
    if(readFile==NULL) {
        printf("no file");
    }
    else{
        int i=0;
        while(fscanf(readFile,"%d %d",&arr1[i],&arr2[i])!=EOF) {
            i++;
        }
        fclose(readFile);
        return i;
    }
}

int isRelPrime(int number1,int number2) {
    int min;
    if(number1<number2) {
        min = number1;
    }
    else {
        min = number2;
    }
    for(int i=2;i<=min;i++) {
        if(number1%i==0 && number2%i==0) {
            return 0;
        }
    }
    return 1;
}

int findRelPrimes(int arr1[],int arr2[], int size,int arr3[]) {
    int check;
    int j=0;
    for(int i=0;i<size;i++) {
        check = isRelPrime(arr1[i],arr2[i]);
        if(check) {
            arr3[j] = i;
            j++;
        }
    }
    return j;
}
