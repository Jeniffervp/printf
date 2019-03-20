#include "holberton.h"

/**
 * print_binary - print number in binary.
 *
 * @list: array the elements variadics.
 *
 * Return: the length the characters printed.
 */

int print_binary(va_list list)
{
	char p[16];
	int i;
	unsigned int num = va_arg(list, int);
	int chars = 0;

	if (num == 0 || num == 1)
	{
		_putchar(num + '0');
		chars++;
	}
	if (num >= 2)
	{
		for (i = 0; num >= 2; i++)
		{
			p[i] = (num % 2) + '0';
			num /= 2;
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
