/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:22:28 by aperron           #+#    #+#             */
/*   Updated: 2023/10/17 17:45:30 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		index;
	char	*str1;
	char	*str2;

	index = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (index < n && str1)
	{
		if (str1[index] - str2[index] != 0)
			return (str1[index] - str2[index]);
		index++;
	}
	return (0);
}
