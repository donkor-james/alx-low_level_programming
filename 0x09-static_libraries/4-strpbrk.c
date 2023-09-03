#include "main.h"
/**
* _strpbrk - main function
* @s: The string to be searched for.
* @accept: The set of bytes to be search for
* Return: If a set is matched - a pointer to the matched byte
* If no set is matched - null
*/
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
