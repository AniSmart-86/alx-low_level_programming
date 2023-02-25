#include "main.h"
#include <unistd.h>
/**
 * print_numbers - print the number 0-9
 *
 * Return: always 0 (success)
 */
void print_numbers(void)
{
	char c;

	for (c = '0' ; c <= '9' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
