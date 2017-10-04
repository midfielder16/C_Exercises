#include <stdio.h>
float expense[13];
int count;
int main()
{
	for (count = 1; count <= 13; count ++)
	{
		printf("Enter expense for month %d\n", count);
		scanf("%f", &expense[count]);
	}
	for (count = 1; count <= 13; count++)
	{
		printf("Month %d = $%.2f\n", count, expense[count]);
	}
	return 0;
}

