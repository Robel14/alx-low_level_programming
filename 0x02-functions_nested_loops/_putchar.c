#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @C: The character to print
 * Return: On succes 1
 * On error, -1 is retrned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
