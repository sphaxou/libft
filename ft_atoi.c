/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:20:02 by vgallois          #+#    #+#             */
/*   Updated: 2019/10/15 17:17:30 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	res;
	int	neg;
	int	i;

	res = 0;
	i = 0;
	neg = 1;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == '\r' || s[i] == '\f'
			|| s[i] == '\v' || s[i] == ' ')
		i++;
	if (s[i] == '+' || s[i] == '-')
		neg = (s[i++] == '+' ? 1 : -1);
	while (ft_isdigit(s[i]))
		res = 10 * res + s[i++] - '0';
	return (neg * res);
}
