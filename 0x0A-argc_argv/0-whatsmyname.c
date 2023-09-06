#include <stdio.h>
/**
* main -  prints program name
* @argc: number of arguments passed to the function
* @argv: Array of arguments passed to main function
* Return: return 0
*/
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
