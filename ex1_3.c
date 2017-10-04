#include <stdio.h>
#include <math.h>
int i, n, sum = 0;
int main(void)
{
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		sum += i*2;
	printf("%d\n", sum);
}