/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:34:47 by vgallois          #+#    #+#             */
/*   Updated: 2019/10/17 06:17:10 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		get_len(int nb, char *b)
{
	int		len;

	if (!b || !b[1])
		return (0);
	len = 0;
	if (nb <= 0)
		len++;
	while (nb)
	{
		len++;
		nb /= (int)ft_strlen(b);
	}
	return (len);
}

static int		checkbase(const char *b)
{
	int		i;
	int		j;

	i = 0;
	if (ft_strlen(b) == 1)
		return (3);
	while (b[i])
	{
		j = 0;
		if (b[i] == '+' || b[i] == '-' || b[i] == '*' || b[i] == '/'
				|| ft_isspace(b[i]))
			return (1);
		while (j < i)
		{
			if (b[j] == b[i])
				return (2);
			j++;
		}
		i++;
	}
	return (0);
}

char			*ft_itoa_base(int nb, char *b)
{
	char	*res;
	int		i;
	int		len;
	int		lw;

	lw = get_len(nb, b);
	if (!b || checkbase(b) || !(res = (char *)malloc(sizeof(char) * (1 + lw))))
		return (NULL);
	len = (int)ft_strlen(b);
	i = (nb > 0 ? 0 : 1);
	res[lw--] = '\0';
	if (nb < 0)
		res[0] = '-';
	if (nb == 0)
		res[0] = b[0];
	while (nb)
	{
		res[lw--] = (i) ? b[-(nb % len)] : b[nb % len];
		nb /= len;
	}
	return (res);
}
