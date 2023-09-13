#include<stdio.h>
/lphabet.c**
 * print_alphabet - Make the alphabet
 * Return: void
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
}
