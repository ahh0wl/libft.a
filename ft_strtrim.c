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

int	ft_foundin(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *src, const char *set)
{
	char	*res;
	size_t	todelbeg;
	size_t	size;

	todelbeg = 0;
	size = ft_strlen(src) - 1;
	if (!src)
		return (NULL);
	else if (!set)
		return (ft_strdup(""));
	while (ft_foundin(src[todelbeg], set))
		todelbeg++;
	while (ft_foundin(src[size], set))
		size--;
	if (todelbeg > size)
		return (ft_strdup(""));
	size++;
	res = ft_substr(src, todelbeg, size - todelbeg);
	return (res);
}
