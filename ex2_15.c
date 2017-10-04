#include <stdio.h>
typedef struct entry
{
	int phone;
	char fname[20];
	char lname[20];
} entry; 
entry list[4];
int i;
int main(void)
{
    for (i = 0; i < 2; i++)
    {
    	printf("\nEnter first name: \n");
    	scanf("%s", list[i].fname);
    	printf("\nEnter last name: \n");
    	scanf("%s", list[i].lname);
    	printf("\nEnter phone: \n");
    	scanf("%d", &list[i].phone);
    }
    for (i = 0; i < 2; i++)
    {
    	printf("Name %s %s", list[i].fname, list[i].lname);
    	printf("\nPhone : %i\n", list[i].phone);
    }
    printf("\n");
    return 0;
}
