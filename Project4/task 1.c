#include<stdio.h>
main() {
	int units;
	printf("enter your units: ");
	scanf_s("%d", &units);
	if (units > 500)
		printf("high usage");
	else
		printf("normal usage");
}
