#include "main.h"






int print_c(va_list args)
{
	
	char c = va_arg(args, int);
	_putchar(c);
	return (1);
}

int print_s(va_list args)
{
	char *str;
	int i, len;
	str = va_arg(args, char*);
	len = _strlen(str);
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	return (len);
}

int print_p(va_list args __attribute__((unused)))
{
        
	_putchar('%');
	return (1);
}

int print_d(va_list args)
{
	int n;
	n = va_arg(args, int);
	if (n);
	{
	  while (n)
	  {
	    n /= 10;
	  }
  _putchar(n + '0');
  
  print_d();
	}
	return (i);
}
