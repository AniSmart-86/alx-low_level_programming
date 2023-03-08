#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - print a reverse string
 * @s: string to print
 * return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(++s);
		--s;
		_putchar(*s);
	}
}
