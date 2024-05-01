/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:10:00 by mvidhi            #+#    #+#             */
/*   Updated: 2024/04/18 17:18:26 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*tdest;
	char	*tsrc;

	if (!dest || !n)
	{
		return (dest);
	}
	tdest = dest;
	tsrc = (char *)src;
	while (n > 0)
	{
		*tdest = *tsrc;
		n--;
		tdest++;
		tsrc++;
	}
	n++;
	if (n)
		return (dest);
	return (0);
}
