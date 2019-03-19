#include "holberton.h"

/**
 4 * print_string - print characters.
 5 *@list: is the list of options.
 6 *
 7 * Return: Always 0
 8 */

int print_string(va_list list)
{
	char *str, *n;
	int l, cont;

	str = va_arg(list, char*);
	n = "(null)";

	if(!str)
	{
		for(cont = 0; n[cont]; cont++)
			_putchar(n[cont]);
		return (cont);
	}
	else
	{
		for(l = 0; str[l]; l++)
			_putchar(str[l]);
	}
	return (l);
}
