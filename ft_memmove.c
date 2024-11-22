/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femorell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:47:08 by femorell          #+#    #+#             */
/*   Updated: 2022/10/05 10:47:10 by femorell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	if (dest > src)
		while (n--)
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	return (dest);
}
