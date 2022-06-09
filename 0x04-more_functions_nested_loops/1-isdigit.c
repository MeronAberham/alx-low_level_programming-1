#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: the parameter to print
 *
 * Return: 1 or 0 if the number is less than 9 it will return 1 else 0 
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

