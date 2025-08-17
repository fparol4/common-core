/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fparola <fparola@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:22:02 by fparola           #+#    #+#             */
/*   Updated: 2025/08/16 21:22:02 by fparola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>
#include <stdio.h>

void	ft_printf(char *format, ...)
{
	va_list args;
	va_start(args, format);
	while (*format) 
	{
		if (*format == '%')
		{
			char *arg = ft_substr(format, 0, 3);
			if (ft_strnstr(arg, "%ca", 3))
			{
				printf("vini e gay");
				ft_putchar_fd((char) ft_toupper(va_arg(args, int)), 1);
				format += 2;
			}
			else if (ft_strnstr(arg, "%c", 3))
			{
				printf("**");
				ft_putchar_fd((char) va_arg(args, int), 1);
				format += 1;
			}
			else if (ft_strnstr(arg, "%s", 3))
			{
				printf("***");
				ft_putstr_fd((char *) va_arg(args, char *), 1);
				format += 1;
			}
		} else {
			ft_putchar_fd(*format, 1);
		}
		format++;
	}
}

int	main()
{
	ft_printf("helloworld: %%");
	printf("\n----\n");
	printf("p helloworld:%");
}
