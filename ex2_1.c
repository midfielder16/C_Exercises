#include <stdio.h>
void main()
{
	int i, n;
	printf("Enter n: \n");
	scanf("%d", &n);
	int a[n];
	for (i = 0; i < n; i++)
	{
		printf("element-%d : ", i);
		scanf("%d", &a[i]);
	};
	printf("Element in array are: ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}