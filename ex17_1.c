#include <stdio.h>
void matrix(int x, int y);
int main(void)
{
	int x, y;
	printf("Nhap cac gia tri x, y: \n");
	scanf("%d", &x);
	scanf("%d", &y);
	matrix(x, y);
	return 0;	
}
void matrix(int x, int y)
{
	int i, j;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
			printf("X ");
		printf("\n");
	}
}