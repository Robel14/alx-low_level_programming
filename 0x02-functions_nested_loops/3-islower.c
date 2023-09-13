#include<stdio.h>
/**
 * main - Check the code
 * Return: Always 0,1
 */
int main(void)
{
	int r;

	r = is_lowercase('H');
	putchar(r + '0');
	r = is_lowercase('o');
	putchar(r + '0');
	r = is_lowercase(100);
	putchar(r + '0');
	putchar('\n');
	return (0);
}
