#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int a, b, c;
float delta, x, x1, x2;
int main()
{
    printf("Phuong trinh bac 2: A.x^2 + B.x + C = 0\n\n");
    printf("Nhap cac he so a, b, c:  \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    delta = b * b - 4 * a *c;
    if (delta < 0)
    {
    	printf("Phuong trinh vo nghiem\n\n");
    }
    else
    {
    	a = 2*a;
    	if (delta == 0)
    	{
    		x = -b /a;
    		printf("Phuong trinh co nghiem kep: x1 = x2 = %f\n", x);
    	}
    	else
    	{
    		x1 = (-b + sqrt(delta)) / a;
    		x2 = (-b - sqrt(delta)) / a;
    		printf("Phuong trinh co 2 nghiem :\n");
    		printf("X1 = %f\n", x1);
    		printf("X2 = %f\n", x2);
    	};
    };
	return 0;
}