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

#include <stdio.h>

static int valid_arg(char arg)
{
	char *allowed;
	
	*allowed = {'A', 'B'};
}

static int count_args(char *s)
{
	int args;

	while (*s)
	{
		if (*s == '%')
		{
			if (valid_arg(*(s + 1)))
				count++;
		}
	}
}

static int ft_printf(char *s, ...)
{
	va_list args;
}

int	main()
{
}
