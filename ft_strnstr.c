/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:14:38 by aperron           #+#    #+#             */
/*   Updated: 2023/10/24 15:32:43 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		index1;
	int		index2;

	index1 = 0;
	if (*needle == '\0')
		return (haystack);
	while (index1 < len && haystack[index1] != '\0')
	{
		index2 = 0;
		while (needle[index2] == haystack[index1 + index2])
		{
			if (needle[index2] == '\0')
				return ((char *)(haystack + index1));
			index2++;
		}
		index1++;
	}
	return (NULL);
}
