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

int	nlen(int n)
{
	int	pos;
	int	nbr;

	nbr = n;
	pos = 0;
	if (nbr <= 0)
	{
		pos++;
		nbr *= -1;
	}
	while (nbr != 0)
	{
		nbr /= 10;
		pos++;
	}
	return (pos);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		nbr;
	int		pos;

	if (n == -2147483648)
		return ("-2147483648");
	pos = nlen(n);
	res = (char *)malloc((pos + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[pos] = '\0';
	nbr = n;
	if (nbr < 0)
	{
		res[0] = '-';
		nbr *= -1;
	}
	while (pos > 0)
	{
		pos--;
		if (res[pos] != '-')
			res[pos] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (res);
}
