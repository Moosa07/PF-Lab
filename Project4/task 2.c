#include<stdio.h>
main() {
	int amount;
	int balance;
	printf("enter your current balance: ");
	scanf_s("%d", &balance);
	printf("\nenter your withdrawal amount: ");
	scanf_s("%d", &amount);
	if (amount <= balance && amount > 0)
		printf("\nwithdrawal approved");
	else
		printf("\nwithdrawal denied");
}

