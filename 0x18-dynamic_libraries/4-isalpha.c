#include "main.h"
/**
 * _isalpha - function to print lowercase or uppercase
 *
 * @c: parameter is to be printed.
 *
 * Return: 1 if c is lower or uppercase
 * and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
