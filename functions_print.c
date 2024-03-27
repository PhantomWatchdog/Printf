#include "main.h"

/**
* print_c - Print a character.
* @args: Arguments print.
* Return: The character.
*/

int print_c(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
* print_s - Print a string.
* @args: Arguments print.
* Return: The string
*/

int print_s(va_list args)
{
	char *str;
	int length, index;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	length = _strlen(str);

	for (index = 0; index < length; index++)
	{
		_putchar (str[index]);
	}
	return (length);
}

/**
 * print_percent - Print the percentage char.
 * Return: 1 .
*/

int print_percent(void)
{
	_putchar(37);
	return (1);
}
