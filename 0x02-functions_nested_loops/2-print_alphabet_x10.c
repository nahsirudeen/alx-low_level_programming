#include "main.h"
/**
 * print_alphabet_x10 - prints all alphabets in lowercase 10 times
 * Return: 1 when successful
 */
void print_alphabet_x10(void)
{
	char i, k;

	for (k = 0; k < 10; k++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

