/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:03:41 by mvidhi            #+#    #+#             */
/*   Updated: 2024/04/18 18:14:41 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t ds)
{
	size_t	i;

	i = 0;
	while ((src[i] && i + 1 < ds))
	{
		dest[i] = src[i];
		i++;
	}
	if (ds > 0)
		dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
