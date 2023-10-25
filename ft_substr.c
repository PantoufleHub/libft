/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:17:31 by aperron           #+#    #+#             */
/*   Updated: 2023/10/25 11:29:40 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		index;
	char	*ss;

	index = 0;
	ss = (char *)malloc(sizeof(char) * len);
	if (!ss)
		return (NULL);
	while (index < len && s[index] != '\0')
	{
		ss[index] = s[start + index];
		index++;
	}
	ss[index] = '\0';
	return (ss);
}
