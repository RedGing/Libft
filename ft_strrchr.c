/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femorell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:20:58 by femorell          #+#    #+#             */
/*   Updated: 2022/10/08 12:21:00 by femorell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == '\0')
		return (&((char *)s)[i]);
	while (i >= 0)
	{
		if (((char *)s)[i] == (char)c)
			return (&((char *)s)[i]);
		i--;
	}
	return (0);
}
