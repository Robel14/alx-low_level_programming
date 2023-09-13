#include<stdio.h>
/**
 * main - check the code
 * Return: Always 0
 */
void print_alphabet_10_times(void)
{
	char letter;
	int i;

	for (i = 0;i < 10; i++)
	{
		for (letter = 'a';letter <= 'z'; letter++)
		{
			putchar(letter);
		}
	}
	putchar('\n');
}
