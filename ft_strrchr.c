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
	char	*found;
	int		i;

	i = 0;
	found = NULL;
	while (s[i] && c != '\0')
	{
		if ((unsigned char)s[i] == (unsigned char)c)
		{
			found = (char *)&s[i];
		}
		i++;
	}
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	return (found);
}
