/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fparola <fparola@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 10:39:24 by fparola           #+#    #+#             */
/*   Updated: 2025/08/13 10:41:52 by fparola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p_1;
	unsigned char	*p_2;

	p_1 = (unsigned char *) s1;
	p_2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (p_1[i] != p_2[i])
			return (p_1[i] - p_2[i]);
		i++;
	}
	return (0);
}
