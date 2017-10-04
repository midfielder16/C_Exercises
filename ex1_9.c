#include <stdio.h>
#include <math.h>
int n, i, x; 
float s;
int factorial(int n);
int main()
{
	printf("Enter n : \n");
	scanf("%d", &n);
	printf("Enter x : \n");
	scanf("%d", &x);
	s = 1;
	for (i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
			s -= pow(x, i) / factorial(n);
		else
			s += pow(x, i) / factorial(n);
	}
	printf("Summary: %f\n", s);
	return 0;
}
int factorial(int n)
{
	int i, fact;
	fact = 1;
	for (i = 1; i <= n; i++)
		fact *= i;
	return fact;
}