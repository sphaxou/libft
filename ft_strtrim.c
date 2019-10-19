/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:38:24 by vgallois          #+#    #+#             */
/*   Updated: 2019/10/17 06:51:09 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_t(char const c, char const *t)
{
	int		i;

	i = 0;
	while (t[i])
		if (c == t[i++])
			return (1);
	return (0);
}

char		*ft_strtrim(char const *s, char const *t)
{
	int		i;
	int		j;
	char	*res;

	if (!s || !t)
		return (NULL);
	i = 0;
	j = 0;
	while (is_in_t(s[i], t))
		i++;
	j = ft_strlen(s) - 1;
	while (j > i && is_in_t(s[j], t))
		j--;
	res = ft_substr(s, i, j - i + 1);
	return (res);
}
