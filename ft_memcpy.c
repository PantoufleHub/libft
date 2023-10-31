/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:47:10 by aperron           #+#    #+#             */
/*   Updated: 2023/10/26 10:39:39 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	index;
	char	*d;
	char	*s;

	if (!dest && !src)
		return (NULL);
	index = 0;
	d = dest;
	s = (char *)src;
	while (index < n)
	{
		d[index] = s[index];
		index++;
	}
	return (dest);
}
