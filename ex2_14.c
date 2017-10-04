#include <stdio.h>
struct data
{
	float amount;
	char fname[30];
	char lname[30];
} rec;
int main(void)
{
	printf("Enter the donor's fisrt and last name, \n");
	printf("Separate by a space: ");
	scanf("%s %s", rec.fname, rec.lname);
	printf("Enter the donation amount : ");
	scanf("%f", &rec.amount);

	printf("\n Donor %s %s gave $ %.2f .\n", rec.fname, rec.lname, rec.amount);
	return 0;
}