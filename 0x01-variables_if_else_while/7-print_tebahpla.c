#include <stdio.h>
/**
 * main - alphabet in reverse lowercase
 * Return: 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');

	return (0);
}
