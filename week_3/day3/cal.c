#include <stdio.h>


int main()
{
	int num1;
	int num2;
	char opr;

	printf("Type number 1: ");
	scanf("%d", &num1);

	printf("Type number 2: ");
	scanf("%d", &num2);

	printf("Type an operator: ");
	scanf(" %c", &opr);

	if ( opr == '+')
	{
		printf("%d \n", num1 + num2);
		
	}




}
