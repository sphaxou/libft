/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:38:33 by vgallois          #+#    #+#             */
/*   Updated: 2019/10/21 18:56:01 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;
	size_t	i;

	if (!(res = malloc(count * size)))
		return (NULL);
	i = 0;
	while (i < count)
		((char*)res)[i++] = 0;
	return (res);
}
