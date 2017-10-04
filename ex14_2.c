#include <stdio.h>
#include <math.h>
long cube(long x);
long input, answer;
long cube(long x)
{
	long cubed_x;
    cubed_x = x * x + x;
    return cubed_x;
};
int main(void)
{
	scanf("%d", &input);
	answer = cube(input);
	printf("hihihi : %d\n", answer);
	return 0;
};
