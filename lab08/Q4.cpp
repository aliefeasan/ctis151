#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define DISCOUNT 0.10

int main(void) {
	int number;
	int counter = 0;
	double total_discount,total_payment;
	double payment = 0;


	do{
		printf("ONLINE COURSE REGISTRATION SYSTEM\n---------------------------------");
		printf("\n1. Programming - 1650 TL\n2. Database - 1450 TL\n3. Network - 1250 TL\n4. EXIT");
		printf("\nEnter your choice(1-4):");
		scanf("%d", &number);
		
		switch (number) {
			case 1:
				printf("Registered successfully! Payment: 1650.00 TL");
				payment += 1650;
				counter++;
				break;
			case 2:
				printf("Registered successfully! Payment: 1450.00 TL");
				payment += 1450;
				counter++;
				break;
			case 3:
				printf("Registered successfully! Payment: 1250.00 TL");
				payment += 1250;
				counter++;
				break;
		}
	} while(!(number<1 || number>=4));

	printf("\nTotal payment amount : %f TL\n", payment);
	printf("No of registered courses: %d\n", counter);

	if (counter >= 2) {
		total_discount = DISCOUNT * payment;
		total_payment = payment - total_discount;
		printf("10% discount applied\n");
		printf("Discounted amount : %f TL",total_payment);
	}

	return 0;
}