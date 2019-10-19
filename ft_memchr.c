/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 13:09:44 by vgallois          #+#    #+#             */
/*   Updated: 2019/10/17 06:28:59 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cpy;

	if (!s)
		return (NULL);
	cpy = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (cpy[i] == (unsigned char)c)
			return (cpy + i);
		i++;
	}
	return (NULL);
}
