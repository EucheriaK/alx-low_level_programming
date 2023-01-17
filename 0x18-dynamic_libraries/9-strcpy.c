#include "main.h"
#include <stdio.h>

/**
*char *_strcpy - copies the string pointed to by src
*@dest: copy to destination
*@src: copy from source
*Return: string
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
