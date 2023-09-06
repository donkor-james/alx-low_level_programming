#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies two numbers
* @argc: counts the number of argumens passed to the main
* function
* @argv: array of arguments passed to the main function
* Return: returns 0
*/
int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		printf("%d\n", a * b);
		return (0);
	}
	else
		printf("Error");
		return (1);
}
