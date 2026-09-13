#include<stdio.h>
main() {
	int rating;
	int experience;
	printf("Enter rating: ");
	scanf_s("%d", &rating);
	printf("\nEnter years of experience: ");
	scanf_s("%d", &experience);
	if (rating == 5 && experience >=3)
		printf("\nyou will be receiving an excellent bonus");
	else if (rating == 4 && experience >=2)
		printf("\nyou will be receiving a good bonus");
	else if (rating == 3 && experience >=1)
		printf("\nyou will be receiving a basic bonus");
	else
		printf("\nyou will not be receiving a bonus");
}

