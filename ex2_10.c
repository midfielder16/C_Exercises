#include <stdio.h>
long square;
struct
{
	int len;
	int widht;
} mySquare = {10, 20};
int main(void)
{
    square = mySquare.len * mySquare.widht;
    printf("S = %li\n", square);
    return 0;
}