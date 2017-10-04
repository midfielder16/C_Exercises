#include <stdio.h>
int main()
{
	int i, n;
	printf("Nhap vao n: \n");
	scanf("%d", &n);
	int a[n];
	for (i = 0; i < n; i++)
	{
		printf("element-%d : ", i);
		scanf("%d", &a[i]);
	};
	printf("Sum of all elements in array is: ");
	int sumary = 0;
	for (i = 0; i < n; i++)
		sumary += a[i];
    printf("%d ", sumary);
	printf("\n");
	return 0;
}