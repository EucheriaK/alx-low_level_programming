#include<stdio.h>
/**
 * main-Entry
 * Description:prints the alphabet in lc, and then in uc, followed by a nl
 * Return:0if no error,non-zero if error
 **/
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
return (0);
}

