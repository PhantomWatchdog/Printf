#include "main.h"

/**
 * _printf - Printf function.
 * @format: Types detection.
 * Return: 1 if successful.
*/
int _printf(const char *format, ...)
{
	va_list args;
	int index, jndex, count = 0;
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
	for (index = 0; format && format[index]; index++)
	{
		if (format[index] == '%' && format[index + 1] != 'K' && format[index + 1] != '!')
		{
			index++;
			/* Move in specifiers array */
			for (jndex = 0; f[jndex].letter; jndex++)
			{
				/* Check specifier match */
				if (f[jndex].letter == format[index])
				{
					/* Cast associated function */
					count += f[jndex].f(args);
					break;
				}
			}
		}
		else
		{
			/* If arg's not specifier print it */
			_putchar(format[index]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
