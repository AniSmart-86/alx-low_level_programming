#include "main.h"
/**
 * _strlen_recursion - print the length of a string
 *
 * @s: string to print
 *
 * return: the length of a string
*/
int _strlen_recursion(char *s)
{
	return (*s ? (1 + _strlen_recursion(++s)) : 0);
}
