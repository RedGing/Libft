/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femorell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:05:19 by femorell          #+#    #+#             */
/*   Updated: 2022/10/08 11:05:27 by femorell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*r1;
	char	*r2;

	r1 = (char *)s1;
	r2 = (char *)s2;
	while (n--)
	{
		if (*r1 != *r2)
			return (*(unsigned char *)r1 - *(unsigned char *)r2);
		r1++;
		r2++;
	}
	return (0);
}
