#include<stdio.h>
main() {
	int marks;
	printf("enter your marks: ");
	scanf_s("%d", &marks);
	if (marks >= 80)
		printf("\nyour grade is A");
	else if (marks >= 70 && marks <= 79)
		printf("\nyour grade is B");
	else if (marks >= 60 && marks <= 69)
		printf("\nyour grade is C");
	else if (marks >= 50 && marks <= 59)
		printf("\nyour grade is D");
	else if (marks < 50 && marks >= 0)
		printf("\nyour grade is F");
	else
		printf("Enter valid marks ");
}
