#include <stdio.h>
#include <time.h>
/* more headers are placed here*/
#include <stdlib.h>
/* betty style doc for function main come here*/
/**
* main - main function
* Return: Always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code comes here */
	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negative", n);
	printf("\n");
	return (0);
}
