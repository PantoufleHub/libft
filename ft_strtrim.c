/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:49:05 by aperron           #+#    #+#             */
/*   Updated: 2023/10/25 13:29:13 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	char_in_set(char const c, char const *set)
{
	int	index;

	index = 0;
	while (set[index] != '\0')
	{
		if (set[index] == c)
			return (1);
		index++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		index;
	char	*str;
	int		first;
	int		last;

	first = 0;
	last = 0;
	if (char_in_set(s1[0]), set)
		first = 1;
	if (char_in_set(s1[ft_strlen(s1)]), set)
		last = 1;
	str = (char *)malloc(sizeof(char) * ft_strlen(s1) - first - last);
	if (!str)
		return (NULL);
	index = 0;
	while (index < ft_strlen(s1) - first - last)
	{
		str[index] = s1[index + first];
		index++;
	}
	str[index] = '\0';
	return (str);
}
