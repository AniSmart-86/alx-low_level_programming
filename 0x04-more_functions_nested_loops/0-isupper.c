#include <stdio.h>
#include "main.h"
/**
 * _isupper - print the number of upper and lowercase alphabet.
 *
 * @c: parameter to print
 *
 * Return: 1 or 0
 */
int _isupper(int c)
{

	if (c >= 'A' && c < 'a')
	return (1);
	else
	return (0);
}

