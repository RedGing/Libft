/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femorell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:32:53 by femorell          #+#    #+#             */
/*   Updated: 2022/10/08 10:32:56 by femorell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*temp;

	temp = (const unsigned char *)s;
	while (n--)
	{
		if (*temp == (unsigned char)c)
			return ((void *)temp);
		temp++;
	}
	return (NULL);
}
