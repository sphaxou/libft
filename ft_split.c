/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:49:59 by vgallois          #+#    #+#             */
/*   Updated: 2019/10/19 01:07:32 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbwords(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static void	*bigfree(char **res, int j)
{
	while (j > 0)
		free(res[--j]);
	free(res);
	return (NULL);
}

static int	lenword(const char *s, char c)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char		**ft_split(const char *s, char c)
{
	char	**res;
	int		i;
	int		j;

	if (!s || !(res = malloc(sizeof(char *) * (nbwords(s, c) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			res[j++] = ft_substr(s, 0, lenword(s, c));
		if (*s && !res[j - 1])
			return (bigfree(res, j));
		while (*s && *s != c)
			s++;
	}
	res[j] = NULL;
	return (res);
}
