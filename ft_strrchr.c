/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 00:02:54 by mvidhi            #+#    #+#             */
/*   Updated: 2024/04/19 00:42:49 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*temps = s;
	const char		srch = c;
	char			*last;

	last = NULL;
	while (1)
	{
		if (*temps == srch)
			last = (char *)temps;
		if (*temps == '\0')
			return (last);
		temps++;
	}
}
