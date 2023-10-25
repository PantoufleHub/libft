/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:47:10 by aperron           #+#    #+#             */
/*   Updated: 2023/10/24 15:29:30 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		index;
	char	*d;
	char	*s;

	index = 0;
	d = dest;
	s = src;
	while (index < n)
	{
		d[index] = s[index];
		index++;
	}
	return (dest);
}
