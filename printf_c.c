#include "main.h"
#include <stdarg.h>
/**
 * printf_char - prints a char.
 * @val: arguments.
 * Return: 1.
 */
int print_char(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}

