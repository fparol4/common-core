#include "libft.h"
#include "stdio.h"
#include <stdarg.h>

void	ft_printf(char *format, ...)
{
	va_list args; 
	va_start(args, format);
	
	int i = 0;
	while (format[i]) 
	{
		if (format[i] == '%')
		{
			
		} else {
			ft_putchar_fd(format[i], 1);
		}
	}
}



