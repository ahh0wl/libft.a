/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:54:26 by mvidhi            #+#    #+#             */
/*   Updated: 2024/04/19 17:18:43 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;	

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == 9 || str[i] == 10 || str[i] == 11 || str[i] == 12
		|| str[i] == 13 || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = (result * 10) + str[i] - 48;
		i++;
	}
	return ((result * sign));
}
