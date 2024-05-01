/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:03:15 by mvidhi            #+#    #+#             */
/*   Updated: 2024/04/18 17:05:02 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	rep_len(int num)
{
	int	len;

	len = 0;
	if (num < 0)
	{
		num /= -10;
		len += 2;
	}
	else if (num == 0)
		len = 1;
	while (num)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int				pos;
	unsigned int	str_nbr;
	char			*res;

	pos = rep_len(n);
	res = malloc(sizeof(char) * pos + 1);
	if (!res)
		return (NULL);
	res[pos--] = '\0';
	if (n < 0)
	{
		res[0] = '-';
		str_nbr = n * -1;
	}
	else
		str_nbr = n;
	if (str_nbr == 0)
		res[0] = '0';
	while (str_nbr)
	{
		res[pos--] = str_nbr % 10 + '0';
		str_nbr /= 10;
	}
	return (res);
}
