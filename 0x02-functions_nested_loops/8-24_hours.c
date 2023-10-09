#include "main.h"
/**
* jack_bauer - prints every minute of a day
* Return: nothing
*/
void jack_bauer(void)
{
	int total_min = 1440;
	int i = 0;
	int h1 = 0;
	int h2 = 0;
	int m1 = 0;
	int m2 = 0;

	for (i = 0; i < total_min; i++)
	{
		_putchar(h1 + '0');
		_putchar(h2 + '0');
		_putchar(':');
		_putchar(m1 + '0');
		_putchar(m2 + '0');

		m2 += 1;
		if ((m2 % 10) == 0)
		{
			m1 += 1;
			m2 = 0;
			if ((m1 % 6) == 0)
			{
				h2 += 1;
				m1 = 0;
				if ((h2 % 10) == 0)
				{
					h1 += 1;
					h2 = 0;
				}
			}
		}
		_putchar('\n');
	}

}
