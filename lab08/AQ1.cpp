#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	int digit = 1;
	do {
		printf("Enter a positive integer:");
		scanf("%d", &num);
	} while (num <= 0); 

	for (int i = 10; i < num*10; i *= 10) {
		digit *= (num % i)/(i/10);
	}
	printf("product of digit: %d", digit);

	return 0;
}
