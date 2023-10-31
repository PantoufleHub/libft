/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:31:42 by aperron           #+#    #+#             */
/*   Updated: 2023/10/31 12:18:55 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	math_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

static void	reverse_string(char *str)
{
	size_t	length;
	size_t	index;
	char	tmp;

	length = ft_strlen(str);
	index = 0;
	while (index < length / 2)
	{
		tmp = str[index];
		str[index] = str[length - index - 1];
		str[length - index - 1] = tmp;
		index++;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		is_neg;
	size_t	length;

	is_neg = (n < 0);
	str = (char *)ft_calloc((10 + is_neg + 1), sizeof(*str));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	length = 0;
	while (n != 0)
	{
		str[length++] = '0' + math_abs(n % 10);
		n = (n / 10);
	}
	if (is_neg)
		str[length] = '-';
	reverse_string(str);
	return (str);
}
