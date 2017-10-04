#include <stdio.h>
int lenght, width;
long area;

struct coord
{
	int x;
	int y;
} td;

struct retangle
{
    struct coord topleft;
	struct coord bottomrt;
} myBox;
int main(void)
{
	printf("Enter the top left x coordinates:  ");
	scanf("%d", &myBox.topleft.x);

	printf("Enter the top left y coordinates:  ");
	scanf("%d", &myBox.topleft.y);

	printf("Enter the bottom right x coordinates:  ");
	scanf("%d", &myBox.bottomrt.x);

	printf("Enter the bottom right y coordinates:  ");
	scanf("%d", &myBox.bottomrt.y);

	width = myBox.bottomrt.x - myBox.topleft.x;
	lenght = myBox.bottomrt.y - myBox.topleft.y;

	area = width * lenght;
	printf("\nThe area is %li \n", area);

	return 0;
}