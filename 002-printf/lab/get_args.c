#include "libft.h"
#include <stdarg.h>
#include <stdio.h>


void	ft_printf(int count, ...)
{
	va_list args;
	va_start(args, count);
	printf("ARG: %s\n", va_arg(args, char *));
	printf("ARG: %s\n", va_arg(args, char *));
	printf("ARG: %s\n", va_arg(args, char *));
	printf("ARG: %d\n", va_arg(args, int));
	va_end(args);
}

int	main()
{
	ft_printf(0, "helloworld", "minha mae", "eita", 1, 2, 22);
}

/** --- **/

// int	v1()
// {
//
// 	int args = 0;
// 	char	*valid_args[] = {
// 		"%c",
// 		"%s",
// 		"%d",
// 	};
// 	char *s = "helloworld %d , my name is %sa, your first char is %c";
// 	char ARG_START = '%';
// 	char ARG_SIZE = 3;
// 	while (*s) 
// 	{
// 		if (*s == ARG_START)
// 		{
// 			char *arg = ft_substr(s, 0, 2);
// 		}
// 		s++;
// 	}
// }

