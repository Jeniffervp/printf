#include "holberton.h"

/**
 * print_int - print number type int.
 *
 * @list: array the elements variadics.
 *
 * Return: the length the characters printed.
 */

int print_int(va_list list)
{
	char p[10];
	int i;
	int num = va_arg(list, int);
	int chars = 0;

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
		chars++;
	}
	if (num >= 0 && num <= 9)
	{
		_putchar(num + '0');
		chars++;
	}
	if (num >= 10)
	{
		for (i = 0; (num / 10) != 0; i++)
		{
			p[i] = (num % 10) + '0';
			num /= 10;
		}
		p[i] = num + '0';
		chars += i + 1;
		for ( ; i >= 0; i--)
		{
			_putchar(p[i]);
		}
	}
	return (chars);
}
