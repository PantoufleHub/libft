/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:12:15 by aperron           #+#    #+#             */
/*   Updated: 2023/10/26 16:25:35 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		if (str1[index] == '\0' || str1[index] != str2[index])
			return ((unsigned char)str1[index] - (unsigned char)str2[index]);
		index++;
	}
	return (0);
}
