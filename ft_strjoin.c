/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:49:12 by mvidhi            #+#    #+#             */
/*   Updated: 2024/04/19 17:54:58 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*res;
	size_t	i;

	res = (char *)malloc(((ft_strlen(s1) + ft_strlen(s2)) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = ft_strlcpy(res, s1, ft_strlen(s1) + 1);
	i += ft_strlcpy(&res[i], s2, ft_strlen(s2) + 1);
	res[i] = '\0';
	return (res);
}
