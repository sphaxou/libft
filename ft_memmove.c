/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 12:32:28 by vgallois          #+#    #+#             */
/*   Updated: 2019/10/22 02:50:01 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	int		s;
	char	*res;
	char	*sr;

	s = (dst < src ? 1 : -1);
	i = (dst < src ? 0 : len - 1);
	res = (char *)dst;
	sr = (char *)src;
	while (len)
	{
		res[i] = sr[i];
		i += s;
		len--;
	}
	return (res);
}
