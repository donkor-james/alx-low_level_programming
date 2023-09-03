#include "main.h"
/**
* _abs - turn any number less than 0 to positive
* @a: The number to find the absolut of
* Return: number greater than 0
*/
int _abs(int a)
{
	if (a < 0)
		a *= -1;

	return (a);
}
