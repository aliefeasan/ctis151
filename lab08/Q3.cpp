#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char shake;
	int number;
	int counter = 0;
	do{
		printf("Shake & Win ;)\n");
		number = rand() % 4 + 1;
		switch (number) {
			case 1:
				printf("You won Daily 1 GB Spotify");
				break;
			case 2:
				printf("Weekly 10 GB YouTube");
				break;
			case 3:
				printf("MONTHLY 1000 mins. call package");
				break;
			case 4:
				printf("1 GB for 12 HOURS");
				break;
		}
		printf("\nShake again? (y/n):");
		scanf(" %c", &shake);
		counter++;
	}while (shake == 'y' && counter<4);

	return 0;
}