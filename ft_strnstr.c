/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:42:55 by mvidhi            #+#    #+#             */
/*   Updated: 2024/04/19 17:19:08 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hayi;
	size_t	neei;

	hayi = 0;
	neei = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[hayi] && hayi < len)
	{
		while (hayi + neei < len && haystack[hayi + neei] == needle[neei]
			&& needle[neei])
		{
			neei++;
		}
		if (!needle[neei])
		{
			if (neei == ft_strlen(needle))
				return ((char *)&haystack[hayi]);
		}
		neei = 0;
		hayi++;
	}
	return (NULL);
}
