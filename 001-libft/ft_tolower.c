/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fparola <fabricio.parola@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 17:22:11 by fparola           #+#    #+#             */
/*   Updated: 2025/08/12 17:22:11 by fparola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	int	k;

	k = ('A' - 'a');
	if (c >= 'A' && c <= 'Z')
		return (c - k);
	return (c);
}

#if __TESTING__
// void __test__()
// {
// 	char buff[] = "AaBb";
// 	for (int i = 0; i < 4; i++)
// 		printf("R: %c \n", ft_tolower(buff[i]));
// }
// int	main (){ __test__(); }
#endif
