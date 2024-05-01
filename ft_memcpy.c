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
	char		*tdes;
	const char	*tsrc;

	tsrc = src;
	tdes = dest;
	if (tdes == tsrc)
		return (tdes);
	while (n--)
	{
		*tdes = *tsrc;
		tdes++;
		tsrc++;
	}
	return (dest);
}
