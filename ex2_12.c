#include <stdio.h>
int lenght_string(char*), len;
char str[50];
int main(void)
{
	printf("Nhap chuoi : \n");
	fgets(str, sizeof str, stdin);
	len = lenght_string(str);
	printf("Lenght = %d ", len);
	printf("\n");
	return 0;
}

int lenght_string(char* ch)
{
	int ptr = 0;
	while (*ch != '\0')
	{
		ptr++;
		ch++;
	};
	return ptr;
}