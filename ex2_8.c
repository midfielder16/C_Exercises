#include <stdio.h>
int i, j, numbs, dup_elements = 0;
int main()
{
	printf("Enter elements number of array:  ");
	scanf("%d", &numbs);
	int arr[numbs];
    printf("Enter elements of array: \n");
    for (i = 0; i < numbs; i++)
    {
    	printf("Ele %d : ", i);
        scanf("%d", &arr[i]);
    };
    for (i = 0; i < numbs; i++)
        for (j = i + 1 ; j < numbs; j++)
        {
   		    if (arr[i] != arr[j])
   		 	    continue;
    	    else
    		    dup_elements += 1;
        };
    printf("Duplicate elements = %d\n", dup_elements);
    return 0;	
}