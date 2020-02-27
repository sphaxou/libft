/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 21:54:50 by vgallois          #+#    #+#             */
/*   Updated: 2020/02/27 18:19:02 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	ft_atof(const char *s)
{
	float	res;
	float	coef;
	int		neg;

	while (ft_isspace(*s))
		s++;
	res = 0;
	neg = *s == '-' ? 1 : 0;
	if (*s == '+' || *s == '-')
		s++;
	while (ft_isdigit(*s))
		res = 10 * res + ((float)(*s++) - (float)'0');
	if (*s == '.')
	{
		coef = 10;
		s++;
		while (ft_isdigit(*s))
		{
			res += (*s++ - '0') / coef;
			coef *= 10;
		}
	}
	return (neg ? -res : res);
}
