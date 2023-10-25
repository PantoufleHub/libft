/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:30:04 by aperron           #+#    #+#             */
/*   Updated: 2023/10/25 11:49:24 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		index;
	char	*s3;

	s3 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	if (!s3)
		return (NULL);
	i1 = 0;
	i2 = 0;
	while (s1[i1])
	{
		s3[i2++] = s1[i1];
		i1++;
	}
	i1 = 0;
	while (s2[i1])
	{
		s3[i2++] = s2[i1];
		i1++;
	}
	s3[i2] = 0;
	return (s3);
}
