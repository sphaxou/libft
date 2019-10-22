/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:05:12 by vgallois          #+#    #+#             */
/*   Updated: 2019/10/22 02:53:07 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	int		bo;

	i = 0;
	while (s[i] && i < start)
		i++;
	bo = (i == start ? 1 : 0);
	if (!(res = malloc(sizeof(char) * ((bo ? len : 0) + 1))))
		return (NULL);
	i = 0;
	while (bo && s[start + i] && i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = 0;
	return (res);
}
