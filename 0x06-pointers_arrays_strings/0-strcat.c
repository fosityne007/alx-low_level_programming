#include "main.h"

/**
 * _strcat - concatenates two string together pointed to by @src
 * null byte, to the end of the string pointed to by @dest
 * @src: The source string to be appended to @dest
 * @dest: A pointer to the string to be concatenated upon
 *
 * Return: A pointer to the destination string @dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] += src[j];
		i++;
		j++;
	}

	dest += '\0';

	return (dest);
}
