#include "holberton.h"

/**
  * _printf - print.
  *@format: is the constant that contains a character string.
  *
  * Return: lenth of printed.
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

	if (format == NULL)
		return (-1);
	va_start(list, format);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{

		if (format[i] == '%')
    {
			if (format[1] == '\0')
				return (-1);
			for (j = 0; j < 5; j++)
			{
				if (format[i + 1] == *(func[j]).character)
				{
					countword += func[j].f(list);
					i++;
					if (format[i + 1] == '%')
						break;
				}
			}
			if (format[i] == '%')
				count += _putchar(format[i]);
		}
		else
			count += _putchar(format[i]);
	}
	return (count + countword);
}
