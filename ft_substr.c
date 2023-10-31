/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:17:31 by aperron           #+#    #+#             */
/*   Updated: 2023/10/31 17:14:04 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	size_t	index;

	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start + 1;
	if (start >= ft_strlen(s))
		len = 0;
	ss = (char *)malloc(sizeof(char) * (len + 1));
	if (!ss)
		return (NULL);
	index = 0;
	while (s[start + index] != '\0' && index < len)
	{
		ss[index] = s[start + index];
		index++;
	}
	ss[index] = '\0';
	return (ss);
}
