/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femorell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:03:58 by femorell          #+#    #+#             */
/*   Updated: 2022/10/10 13:03:59 by femorell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			dest[j] = s[i];
			j++;
		}
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
/*
int	main()
{
	printf("[ft_substr]\n");
	char *s55;
	s55 = ft_substr("A star is born", 2, 4);//FT_SUBSTR
	printf("%s\n", s55);
	printf("\n");
	printf("[expected]\n");
	printf("star\n");
}*/
