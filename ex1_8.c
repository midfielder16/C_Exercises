#include <stdio.h>
#include <math.h>
int t, s, n;
int main()
{
	printf("Nhap vao n : \n");
	scanf("%d", &n);
	s = 0;
	for (t = 1; t<=n; t++)
	{
		s += pow(10, t) -1;
	}
	printf("Tong la : %d\n", s);
	return 0;
}