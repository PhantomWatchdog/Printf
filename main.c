#include "main.h"

/**
 * main - Check the exe of printf functions.
 * Return: Always 0.
*/

int main(void)
{
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");
	_printf("%!\n");
	printf("%!\n");
	_printf("%c\n", 'H');

	return (0);
}