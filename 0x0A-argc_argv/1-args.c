#include <stdio.h>
/**
* main - prints number  of arguments passed
* @argc: argument counter
* @argv: array of argument
* Return: returns 0
*/
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
