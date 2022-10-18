include "main.h"

/**
*print_alphabet_x10 - a fn that prints 10times
*
*Return: x10 a-z
*/

void print_alphabet_x10(void)
{
	int n;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
