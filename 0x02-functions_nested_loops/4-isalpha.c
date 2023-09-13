#include<stdio.h>
/**
 * _isalpha - Shows 1 if input is a
 * letter Anoter cases, shows 0
 *
 * @c: The character is ASCII code
 *
 * Return: 1 for letters o for the rest
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
