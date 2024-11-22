/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femorell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:37:33 by femorell          #+#    #+#             */
/*   Updated: 2022/10/06 18:37:36 by femorell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (((unsigned char *)s1)[i] < ((unsigned char *)s2)[i])
			return (-1);
		if (((unsigned char *)s1)[i] > ((unsigned char *)s2)[i])
			return (1);
		i++;
	}
	return (0);
}
