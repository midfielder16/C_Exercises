#include <stdio.h>
#include <math.h>
int first_numb, second_numb, chose;
int main(void)
{
    printf("CALCULATOR writen by Dai Pham Van\n");
    printf("\n===============================\n");
    printf("Enter first number: ");
    scanf("%d", &first_numb);
    printf("Chose option:\n\n");
    printf("Option:\n");
    printf("1 : Summary            2 : Subtraction\n");
    printf("3 : Multiplication     4 : Division\n");
    printf("I chose: ");
    scanf("%d", chose);
    while ((1 < chose) & (4 > chose))
    {
        switch(chose)
        {
    	    case 1 : addidion(first_numb, second_numb);
    	    case 2 : subtraction(first_numb, second_numb);
    	    case 3 : multi(first_numb, second_numb);
    	    case 4 : div(first_numb, second_numb);
    	    default :
    	    {
    	    	printf("Please chose again!\n");
    	    };
        };
        printf("I chose : \n");
        scanf("%d", &chose);
    }

}
int addidion(int a, int b)
{
	int summary;
	summary = a + b;
	return summary;
};
int subtraction(int a, int b)
{
	int sub;
	sub = a - b;
	return sub;
};
long multi(int a, int b)
{
	long mul;
	mul = a * b;
	return mul;
};
float div(int a, int b)
{
	float divi;
	while (b = 0)
	{
        printf("SyntaxERROR !\n");
        continue;
	};
	divi = a / b;
	return divi;
};