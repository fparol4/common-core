/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fparola <fabricio.parola@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:00:05 by fparola           #+#    #+#             */
/*   Updated: 2025/08/13 11:54:35 by fparola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	f_upwards(unsigned char *dst, unsigned char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
}

void	f_backwards(unsigned char *dst, unsigned char *src, size_t n)
{
	size_t	i;

	i = n;
	while (i > 0)
	{
		i--;
		dst[i] = src[i];
	}
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_p;
	unsigned char	*src_p;

	if (!dst && !src)
		return (NULL);
	dst_p = (unsigned char *) dst;
	src_p = (unsigned char *) src;
	if (dst_p > src_p)
		f_backwards(dst_p, src_p, n);
	else
		f_upwards(dst_p, src_p, n);
	return (dst);
}

#if __TESTING__
// #include <string.h>
// void __test__()
// {
// 	char buff_2[] = "ABCDEF";
// 	char buff_1[] = "KLM";
// 	ft_memmove(buff_1 + 2, buff_2, 3);
// 	printf("RESULT -> %s;%s", buff_1, buff_2);
// }
// int	main (){ __test__(); }
#endif
