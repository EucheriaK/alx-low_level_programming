#include "main.h"

/**
*print_alphabet_x10 -> prints lowercase alphabets
*
*Return: x10 a-z
*/

void print_alphabet_x10(void)
{
	int n;
	int x;

	while (n < 10)
	{
		for (x = 0; x < 10; x++)
		{
			for (n = 'a'; n <= 'z'; n++)
			{
				_putchar(n);
			}
			_putchar('\n');
		}
	}
}
