#include "main.h"

/**
* print_buffer - Prints the contents of the buffer if it exists
* @buffer: Array of chars
* @buff_ind: Index at which to add next char, represents the length.
*/
int _printf(const char *format, ...)
{
int i;
int c;
char *s;
va_list args;
va_start(args, format);
for (i = 0; format[i]; i++)
{
if (format[i] == '%')
{
i++;
switch (format[i])
{
case 'c':
c = va_arg(args, int);
_putchar(c);
break;
case 's':
s = va_arg(args, char *);
_puts(s);
break;
case '%':
_putchar('%');
break;
default:
break;
}
}
else
{
_putchar(format[i]);
}
}
va_end(args);
return i;
}
