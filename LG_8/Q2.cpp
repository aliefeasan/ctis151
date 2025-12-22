#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int age;

	do {
		printf("Enter your age (18-35):");
		scanf("%d", &age);
		printf("Invalid age! Applicants must be between 18 and 35 years old.\n");
	} while (age < 18 || age>35);
	printf("You are eligible to apply for the position.");
	return 0;
}