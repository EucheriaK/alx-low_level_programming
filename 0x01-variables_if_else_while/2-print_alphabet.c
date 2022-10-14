#include<stdioi.h>
/**
*main-Entry
*Description:prints the alphabet in lowercase, followed by a new line
*Return:0 if no error, non zero if error
**/
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z' ; i++)
	{
		putchar(i);
	}
	putchar ('\n');
return (0);
}
