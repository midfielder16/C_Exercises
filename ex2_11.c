#include <stdio.h>
int i, j, n, *ptr;
int main()
{
	printf("Nhap vao so phan tu cua mang : \n");
	scanf("%d", &n);
	int arr[n];
	for (i = 0; i < n; i++)
	{
        printf("ele %d :", i);
        ptr = &arr[i];
        scanf("%d", ptr);
	};
	for (i = 0; i < n; i++)
	{
		ptr = &arr[i];
		printf("%d ", *ptr);
	};
	printf("\n");
	return 0;
}