/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:04:29 by mvidhi            #+#    #+#             */
/*   Updated: 2024/04/18 16:27:04 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *src, int c, size_t len)
{
	unsigned char	*temp;
	size_t			i;

	temp = src;
	i = 0;
	while (i < len)
	{
		temp[i] = c;
		i++;
	}
	return (src);
}
