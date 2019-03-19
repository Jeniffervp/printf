#include "holberton.h"

/**
 * print_char - print characters.
 *@list: is the list of options.
 *
 * Return: Always 0
 */

int print_char(va_list list)
{
	return (_putchar(va_arg(list, int)));
}
