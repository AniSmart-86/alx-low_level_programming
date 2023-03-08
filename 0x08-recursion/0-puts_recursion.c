#include "main.h"
/**
 * _puts_recursion - print a string and a new line
 * @s: string to print
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	_putchar('\n');
}
