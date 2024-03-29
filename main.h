#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 *
 *
 *
 *
 */
 
 typedef struct sp
 {
 	char sp;
	int (*f)(va_list args);
} p_sp;

int print_c(va_list args);
int print_s(va_list args);
int print_p(va_list args);
int print_d(va_list args);
int _putchar(char c);
int _strlen(char *s);
int _printf(const char *format, ...);
#endif
