/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femorell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:41:45 by femorell          #+#    #+#             */
/*   Updated: 2022/10/13 14:41:47 by femorell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lend;
	size_t	lens;
	size_t	i;

	lend = ft_strlen(dst);
	lens = ft_strlen(src);
	i = 0;
	if (lend >= size || size == 0)
		return (lens + size);
	else
	{
		while (lend + i < size - 1 && src [i] != '\0')
		{
			dst[lend + i] = src[i];
			i++;
		}
		dst[lend + i] = '\0';
		return (lend + lens);
	}
}
