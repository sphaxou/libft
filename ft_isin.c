/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 23:20:17 by vgallois          #+#    #+#             */
/*   Updated: 2020/02/25 23:21:32 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isin(char c, char *s)
{
	while (*s)
		if (c == *s++)
			return (1);
	return (0);
}
