#include <stdio.h>
int i, j, k,rows;
int main(void)
{
	printf("Nhap so hang\n");
	scanf("%d", &rows);
	k = 1;
	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <=i; j++)
			printf("%d ", k++);
		    printf("\n");
	};
}