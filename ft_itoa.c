/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeger <hdeger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 16:31:45 by hdeger           #+#    #+#             */
/*   Updated: 2023/01/24 19:34:54 by hdeger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_numlen(int num)
{
	int	i;

	if (num == 0)
		return (1);
	i = 0;
	while (num != 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*res;
	long	nbr;

	nbr = n;
	len = ft_numlen(nbr);
	if (n < 0)
	{
		len++;
		nbr = -nbr;
	}
	res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	res[len--] = '\0';
	while (nbr > 0)
	{
		res[len--] = nbr % 10 + 48;
		nbr = (nbr / 10);
	}
	if (n < 0)
		res[0] = '-';
	if (n == 0)
		res[0] = '0';
	return (res);
}
