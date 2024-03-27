#include "main.h"

/**
 * _printf - Printf function.
 * @format: Types detection.
 * Return: 1 if successful.
*/
int _printf(const char *format, ...)
{
	va_list args;
	int i, j, count = 0;
	/* Declaration of an struct array with types and functions */
	check_t f[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_percent},
		{0, NULL}
		};
	va_start(args, format);
	/* Check if format is valid */
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	/* Move in format */
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1] != 'K' && format[i + 1] != '!')
		{
			i++;
			/* Move in specifiers array */
			for (j = 0; f[j].letter; j++)
			{
				/* Check specifier match */
				if (f[j].letter == format[i])
				{
					/* Cast associated function */
					count += f[j].f(args);
					break;
				}
			}
		}
		else
		{
			/* If arg's not specifier print it */
			_putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
