#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* check_num - check string if there are digit
* @str: array str
* Return: 0
*/

int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
* main -  main function
* @argc: argument counter for the main function
* @argv: array of argument passed to the main function
* Return: returns 0
*/
int main(int argc, char *argv[])
{
	int count, str_to_int;
	int sum = 0;

	for (count = 1; count < argc; count++)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}
