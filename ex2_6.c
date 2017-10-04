#include <stdio.h>
int i, n;
int main()
{
	printf("Nhap vao n: \n");
	scanf("%d", &n);
	int a[n];
	for (i = 0; i < n; i++)
	{
		printf("element-%d : ", i);
		scanf("%d", &a[i]);
	};
	printf("Element in array are: \n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	};
	printf("\n");
	printf("Reversed : \n");
	for (i = n - 1; i >= 0; --i)
	{
		printf("%d ", a[i]);
	};
	printf("\n");
	return 0;
}