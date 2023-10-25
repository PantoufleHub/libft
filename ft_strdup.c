/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:01:47 by aperron           #+#    #+#             */
/*   Updated: 2023/10/24 16:32:07 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		index;
	char	*ptr;

	if (!s1)
		return (NULL);
	ptr = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!ptr)
		return (NULL);
	while (s1[index] != '\0')
	{
		ptr[index] = s1[index];
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}
