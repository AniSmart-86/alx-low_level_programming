#include "main.h"
#include <stdio.h>
/**
 * rot13 - encode rot13
 *
 * @s: pointer to string parameter
 *
 * Return: *s
 */
char *rot13(char *s)
{
	int i;
	int j;
	char data1[] =
	"ABCDEFGHIJKLMNOPQRSTUWXYZabcdefghijklmnopqrstuvxwyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLmnopqrstvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0 ; j < 52 ; j++)
		{
			if (s[i] == data1[j])
			{
				s[i] = datarot[j];
				break;
			}
		}

	}

			return (s);
}
