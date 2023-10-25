/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:58:27 by aperron           #+#    #+#             */
/*   Updated: 2023/10/24 15:29:52 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	int		index;
	char	*s1;
	char	*s2;

	index = 0;
	s1 = (char *)str1;
	s2 = (char *)str2;
	while (index < n)
	{
		s1[index] = s2[index];
		index++;
	}
	return (str1);
}
