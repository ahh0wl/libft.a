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

char	*ft_strtrim(char const *src, char const *del)
{
	size_t	t_src;
	char	*ret;

	while (*src && ft_strchr(del, *src))
		src++;
	t_src = ft_strlen(src);
	while (t_src && ft_strchr(del, src[t_src - 1]))
		t_src--;
	ret = malloc(sizeof(char) * (t_src + 1));
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, src, t_src + 1);
	return (ret);
}
