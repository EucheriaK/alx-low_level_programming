#include "main.h"

/**
*print_alphabet_x10 -> prints lowercase alphabets
*
*Return: x10 a-z
*/
void print_alphabet_x10(void)
{

	int n, co;

	while (n < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		co++;
		_putchar('\n');
	}
}

