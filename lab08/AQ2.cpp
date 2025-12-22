#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int f, m, c,amount;
	char drink;

	printf("Enter case inventory for Fruit Juice:");
	scanf("%d", &f);
	printf("Enter case inventory for Milk:");
	scanf("%d", &m);
	printf("Enter case inventory for Coke:");
	scanf("%d", &c);

	do {
		printf("Enter the drink code (Fruit Juice(F/f), Milk (M/m), Coke (C/c):");
		scanf(" %c",&drink);
		printf("Enter the amount purchased (>0) / amount sold (<0): 25");
		scanf("%d", &amount);

		switch (drink) {
			case 'F':
			case 'f':
				f +=amount;
				printf("Fruit Juice stock info: %d\n",f);
				break;
			case 'M':
			case 'm':
				m += amount;
				printf("Milk stock info: %d\n", m);
				break;
			case 'C':
			case 'c':
				c += amount;
				printf("Coke stock info: %d\n", c);
				break;
		}
	} while (f > 0 && m > 0 && c > 0);
	return 0;
}