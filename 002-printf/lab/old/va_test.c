
#include <stdarg.h>
#include <stdio.h>

void	t_args(char *format, ...)
{
	va_list args;
	va_start(args, format);
	char *c = va_arg(args, char*);
	printf("%s", c);
	// vprintf(format, args);
	va_end(args);
}

int	main()
{
	t_args("helloworld %s", "Vini Gay");
}
