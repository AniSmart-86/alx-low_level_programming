#include "main.h"
/**
 * jack_bauer - print 24hrs time
 *
 * Return: always 0
 */
void jack_bauer(void)
{
	int m;
	int s;

	for (m = 0 ; m < 24 ; m++)
	{
		for (s = 0 ; s < 60 ; s++)
		{
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar(':');
			_putchar(s / 10 + '0');
			_putchar(s % 10 + '0');
			_putchar('\n');
		}
	}
}
