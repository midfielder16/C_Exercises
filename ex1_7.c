#include <stdio.h>
#include <math.h>
float i, n, s = 0.0;
int main(void)
{
	printf("Nhap vao n : ");
	scanf("%f", &n);
	for (i = 1; i <=n; i++)
		s += 1/i;
	    printf("Tong la : %f\n", s);
	return 0;
}