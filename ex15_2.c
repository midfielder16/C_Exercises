#include <stdio.h>
int x, y, s, c;
int dien_tich(int x, int y);
int chu_vi(int x, int y);
int nhap(int x, int y);
int main(void)
{
	printf("Tinh dien tich & chu vi hinh chu nhat\n\n");
	printf("Nhap chieu dai va chieu rong: \n");
	scanf("%d", &x);
	scanf("%d", &y);
	s = dien_tich(x, y);
	c= chu_vi(x, y);
	printf("Dien tich hinh chu nhat can tinh la : %d\n", s);
	printf("Chu vi hinh chu nhat can tinh la : %d\n", c);
	return 0;
};
int dien_tich(int x, int y)
{
	s = x * y;
	return s;
};
int chu_vi(int x, int y)
{
    c = 2 * (x + y);
    return c;
}
