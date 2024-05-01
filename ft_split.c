/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:54:26 by mvidhi            #+#    #+#             */
/*   Updated: 2024/04/19 17:18:43 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(const char *s, char c)
{
	int	count;
	int	len;
	int	i;

	count = 0;
	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (count);
}

char	**ft_mal(int nw)
{
	char	**res;

	res = (char **)malloc((nw + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	return (res);
}

void	ft_copy_word(char **res, const char *s, int start, int end)
{
	int	word_len;

	word_len = end - start;
	*res = (char *)malloc((word_len + 1) * sizeof(char));
	if (!*res)
		return ;
	ft_strlcpy(*res, s + start, word_len + 1);
	(*res)[word_len] = '\0';
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	int		i;
	int		ri;
	int		len;
	int		start;

	res = ft_mal(ft_count_words(s, c));
	if (!res)
		return (NULL);
	i = 0;
	ri = 0;
	len = ft_strlen(s);
	while (ri < ft_count_words(s, c))
	{
		while (i < len && s[i] == c)
			i++;
		start = i;
		while (i < len && s[i] != c)
			i++;
		ft_copy_word(&res[ri], s, start, i);
		ri++;
	}
	res[ft_count_words(s, c)] = NULL;
	return (res);
}
