#include "main.h"

/*
 * _isdigit - checks if input is digit between 0 - 9
 *
 * @c: input
 *
 * Description: this _isdigit
 *
 * Return: 1 if isdigit, 0 if not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
