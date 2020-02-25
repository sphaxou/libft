/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 19:24:10 by vgallois          #+#    #+#             */
/*   Updated: 2020/02/25 19:24:34 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_memdup(const void *s, size_t n)
{
	char	*res;
	size_t	i;

	i = 0;
	if (!(res = (char*)malloc(sizeof(char) * n + 1)))
		return (NULL);
	while (i < n)
	{
		res[i] = ((unsigned char *)s)[i];
		i++;
	}
	res[i] = 0;
	return (res);
}
