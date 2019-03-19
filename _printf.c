#include "holberton.h"

/**
  * _printf - print.
  *@format: is the constant that contains a character string.
  *
  * Return: Always 0
 */

int _printf(const char *format, ...)
{
	print func[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"i", print_int},
		{"d", print_int},
	};
	va_list list;
	int countword = 0, count = 0;
	int i, j;

	va_start(list, format);

	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; j < 5; j++)
			{
				if (format[i] == *(func[j]).character)
				{
					countword += func[j].f(list);
					i++;
				}
			}
		}
		_putchar(format[i]);
		count++;
	}
	return (count + countword);
}
