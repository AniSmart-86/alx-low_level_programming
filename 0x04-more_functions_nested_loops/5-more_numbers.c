#include <stdio.h>
#include "main.h"
/**
 * more_numbers - print number from 0-14 10x
 * Return: 0 (success)
 */
void more_numbers(void)
	{
	int i, j;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (j = '0' ; j <= '14' ; j++)
		{
			if (j >= 10)
			_putchar(i);
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
