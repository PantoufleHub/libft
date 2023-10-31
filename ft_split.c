/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:29:35 by aperron           #+#    #+#             */
/*   Updated: 2023/10/30 15:07:15 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_words(const char *str, char c)
{
	int	count;
	int	index;
	int	in_word;

	index = 0;
	count = 0;
	in_word = 0;
	while (str[index] != '\0')
	{
		if (str[index] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (str[index] == c)
			in_word = 0;
		index++;
	}
	return (count);
}

static char	*strdup(const char *str, int start, int end)
{
	char	*word;
	int		index;

	index = 0;
	word = malloc((end - start + 1) * sizeof(char));
	while (start + index < end)
	{
		word[index] = str[start + index];
		index++;
	}
	word[index] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	index;
	size_t	word_index;
	int		word_start;
	char	**split;

	split = malloc((nb_words(s, c) + 1) * sizeof(char *));
	if (!s || !(split))
		return (0);
	index = 0;
	word_index = 0;
	word_start = -1;
	while (index <= ft_strlen(s))
	{
		if (s[index] != c && word_start < 0)
			word_start = index;
		else if ((s[index] == c || index == ft_strlen(s)) && word_start >= 0)
		{
			split[word_index] = strdup(s, word_start, index);
			word_start = -1;
			word_index++;
		}
		index++;
	}
	split[word_index] = NULL;
	return (split);
}
