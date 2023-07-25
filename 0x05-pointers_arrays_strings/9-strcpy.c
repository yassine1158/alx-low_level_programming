#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Copies a null-terminated s
 *
 * @dest: string The destination buffer where the string will be copied to.
 * @src: string The source string to be copied.
 * Return: string A pointer to the destination buffer.
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
