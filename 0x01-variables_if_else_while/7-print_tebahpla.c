#include <stdio.h>
/**
 *main-program entry point.
 *Description: prints the lowercase alphabet in reverse
 *Return:0 if no errors, non zero if errors
 **/
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
