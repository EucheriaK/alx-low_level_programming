#include "main.h"

/**
*print_alphabet_x10 - prints lowercase alphabets
*
*Return: x10 a-z
*/

int main(void)

{
	print_alphabet_x10();

	return (0);
}
{
	int n, co;

	co = 0;

	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		co++;
		_putchar('\n');
	}
}

