#include "main.h"
/**
*  - main function
* Return: always 0
*
*
*/
int  _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[1] != s2[i])
		{
			return (s1[1] - s2[i]);
		}
		i++;
	}
	return (0);
}
