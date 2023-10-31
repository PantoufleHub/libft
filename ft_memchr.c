/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:02:48 by aperron           #+#    #+#             */
/*   Updated: 2023/10/26 16:30:21 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	index;
	char	*s;

	index = 0;
	s = (char *)str;
	while (index < n)
	{
		if (*s == (char)c)
			return ((void *)s);
		s++;
		index++;
	}
	return (NULL);
}
