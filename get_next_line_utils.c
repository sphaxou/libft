/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 09:04:23 by vgallois          #+#    #+#             */
/*   Updated: 2020/02/25 19:19:57 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>

void	*ft_expand(char *s1, char *s2, int n1, int n2)
{
	int		i;
	int		i2;
	char	*res;

	if (!(res = malloc(sizeof(char) * (n1 + n2 + 1))))
		return (NULL);
	i = -1;
	while (++i < n1)
		res[i] = s1[i];
	i2 = 0;
	while (i2 < n2)
		res[i++] = s2[i2++];
	res[i] = '\0';
	free(s1);
	return (res);
}
