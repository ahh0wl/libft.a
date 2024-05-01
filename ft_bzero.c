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

void	ft_bzero(void *src, size_t len)
{
	unsigned char	*temp;
	size_t			i;

	temp = src;
	i = 0;
	while (i < len)
	{
		temp[i] = 0;
		i++;
	}
}
