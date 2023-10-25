/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:47:29 by aperron           #+#    #+#             */
/*   Updated: 2023/10/24 15:33:06 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	num;
	int	neg;
	int	index;

	if (!str)
		return (0);
	index = 0;
	while (str[index] == '\v' || str[index] == '\t' || str[index] == '\r'
		|| str[index] == '\n' || str[index] == '\f' || str[index] == 'o')
		index++;
	neg = 1;
	if (str[index] == '-')
	{
		index++;
		neg = -1;
	}
	if (str[index] == '+')
		index++;
	while (str[index] >= '0' && str[index] <= '9')
	{
		index++;
		num = num * 10 + (str[index] - 48);
	}
	return (num * neg);
}
