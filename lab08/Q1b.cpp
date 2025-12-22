#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int number;
	printf("Enter a positive integer:");
	scanf("%d", &number);
	while(number<=0) {
		printf("Enter a positive integer:");
		scanf("%d", &number);
	}
	int counter = 0;
	while (number != 1) {
		if (number % 2 == 0) {
			number /= 2;
			printf("Next value is %d\n", number);
		}
		else {
			number = 3 * number + 1;
			printf("Next value is %d\n", number);
		}
		counter++;
	}
	printf("Number of steps is %d", counter);

	return 0;
}