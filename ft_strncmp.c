/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 00:45:43 by mvidhi            #+#    #+#             */
/*   Updated: 2024/04/19 00:51:01 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != 0 && s2[i] != 0) && (i < (n - 1)))
		i++;
	if (n)
		return (((unsigned char)s1[i] - (unsigned char)s2[i]));
	return (0);
}
