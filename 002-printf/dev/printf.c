/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fparola <fparola@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 20:52:09 by fparola           #+#    #+#             */
/*   Updated: 2025/08/16 20:52:09 by fparola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**

	FN = PRINFT
	RULES
		- %c char 
		- %s string 
		- %p pointer 
		- %d decimal (b10)
		- %i inteiro (b10)
		- %u int (b10 sem sinal)
		- %x hex minusculo (b16)
		- %X hex maiusculo (b16)
		- %% porcentagem
*/

#include "libft.h"
#include <stdarg.h>
#include <stdio.h>

#define FD_STDOUT 1
#define B_HEX "0123456789ABCDEF"


static void	ft_putnbr(int n, int unsign)
{
	int rest;
	int l_digit;

	rest = n / 10;
	l_digit = (n % 10);
	if (n < 0)
	{
		if (!unsign)
			ft_putchar_fd('-', FD_STDOUT);
		rest *= -1;
		l_digit *= -1;
	}
	if (rest != 0)
		ft_putnbr(rest, unsign);
	ft_putchar_fd(l_digit + '0', FD_STDOUT);
}

// ?? maybe unsigned long
static void	ft_puthx(unsigned int n, int upper)
{
	int rest;
	int l_digit;

	rest = n / 10;
	l_digit = (n % 10);
	if (n < 0)
	{
		rest *= -1;
		l_digit *= -1;
	}
	if (rest != 0)
		ft_putnbr(rest, unsign);
	ft_putchar_fd(l_digit + '0', FD_STDOUT);
}

static void	f_handle_rule(char **s, va_list args)
{
	if (ft_strncmp(*s, "%c", 2) == 0)
		ft_putchar_fd(va_arg(args, int), FD_STDOUT);
	else if (ft_strncmp(*s, "%s", 2) == 0)
		ft_putstr_fd(va_arg(args, char *), FD_STDOUT);
	else if (ft_strncmp(*s, "%i", 2) == 0 || ft_strncmp(*s, "%d", 2) == 0)
		ft_putnbr_fd(va_arg(args, int), FD_STDOUT);
	else if (ft_strncmp(*s, "%u", 2) == 0)
	{
		int k = va_arg(args, int);
		if (k < 0) k *= -1;
		ft_putnbr_fd(k, FD_STDOUT);
	}
	else if (ft_strncmp(*s, "%p", 2) == 0)
		ft_putstr_fd(va_arg(args, char *), FD_STDOUT);
	*s += 2;
}

void	ft_printf(char *format, ...)
{
	va_list args;
	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
			f_handle_rule(&format, args);
		else if (*format)
		{
			ft_putchar_fd(*format, FD_STDOUT);
			format++;
		}
	}
}

int	main()
{
	ft_putnbr(-42, 0);

	// ft_printf("I'm the letter %c\n", 'K');
	// ft_printf("I'm with name %s\n", "smoking baby");
	// ft_printf("And my age is %i\n", 42);
	// ft_printf("But the world time can have: %d\n", 42);
	//
	//
	// int x = -2147483648;
	// // printf("Hey, i'm negative.. %u\n", (unsigned int) x);
	// ft_printf("Hey, i'm negative.. %u\n", x);

}
