 #ifndef _HOLBERTON_H_
 #define _HOLBERTON_H_

 #include <stdarg.h>
 #include <stdlib.h>
/**
 * struct print - struct print
 *
 * @character: The char operator.
 * @f: The function associated.
 *
 * Description: object for print.
 */
typedef struct print
{
  char *character;
  int (*f)(va_list);
} print;
int _printf(const char *format, ...);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(va_list list);
int print_int(va_list list);
int _putchar(char c);
#endif
