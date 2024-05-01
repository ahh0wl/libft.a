/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 23:49:59 by mvidhi            #+#    #+#             */
/*   Updated: 2024/04/19 16:40:03 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*temps;

	temps = (unsigned char *)s;
	while (*temps != (unsigned char)c && *temps != '\0')
	{
		temps++;
	}
	if (*temps == (unsigned char)c)
		return ((char *)temps);
	else
		return (NULL);
}
