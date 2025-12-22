#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int number;

	do {
		printf("Enter a positive integer:");
		scanf("%d",&number);
		if (number <= 0) {
			printf("%d is not a positive value!\n",number);
		}
	} while (number <= 0);

	if (number % 2 == 0) {
		printf("%d is an even number",number);
	}
	else {
		printf("%d is an odd number", number);
	}

	return 0;
}