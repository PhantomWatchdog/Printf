#include "main.h"





int _printf(const char *format, ...)
{
	p_sp tab[] = {
                {'c', print_c},
                {'s', print_s},
                {'%', print_p},
                {'\0', NULL},
                };
       int i, j, result_f;
	va_list args;
 	va_start(args, format);
	
	i = 0;
	j = 0;
while (format[i] != '\0' && format != NULL)
{ 
	
	if (format[i] == '%')
	{
		i++;

	while (tab[j].sp )
	{
	  if (format[i] == tab[j].sp)
	  {
		  result_f += tab[j].f(args);
		  break;			  
	  }
	 j++;
	}
	}
	else
	{
		_putchar(format[i]);
		result_f++;
	}
	
i++;
}
va_end(args);
return (result_f);
}
