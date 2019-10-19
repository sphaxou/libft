/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:35:47 by vgallois          #+#    #+#             */
/*   Updated: 2019/10/17 06:59:41 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	int		i;
	int		sign;

	sign = (n < 0) ? 1 : 0;
	len = sign + 1;
	i = n;
	while ((i = i / 10))
		len++;
	if (!(res = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	res[len--] = '\0';
	if (sign)
		res[0] = '-';
	while (len != (-1 + sign))
	{
		res[len--] = (sign) ? "0123456789"[(-(n % 10))] :
								"0123456789"[((n % 10))];
		n /= 10;
	}
	return (res);
}
