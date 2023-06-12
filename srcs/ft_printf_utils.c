/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:57:10 by orazafy           #+#    #+#             */
/*   Updated: 2022/12/03 17:39:02 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_dec_to_hex(unsigned long long nb, char *base)
{
	unsigned long long	rlen;
	char				*result;
	unsigned long long	n;
	unsigned long long	pos;

	n = nb;
	rlen = 0;
	while (n != 0)
	{
		n = n / 16;
		rlen++;
	}
	if (nb == 0)
		rlen = 1;
	result = (char *)malloc(sizeof(char) * (rlen + 1));
	if (result == NULL)
		return (NULL);
	result[rlen] = 0;
	while (rlen > 0)
	{
		pos = nb % 16;
		result[rlen-- - 1] = base[pos];
		nb = nb / 16;
	}
	return (result);
}

int	ft_power(long nb, int power)
{
	int	res;

	res = 1;
	while (power > 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}

int	ft_count_digit(long nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		nb = -nb;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_malloc(long *nb, int nb_digits, int *stop)
{
	char	*str;

	if (*nb >= 0)
	{
		str = (char *)malloc(sizeof(char) * (nb_digits + 1));
		if (str == NULL)
			return (NULL);
	}
	else
	{
		str = (char *)malloc(sizeof(char) * (nb_digits + 2));
		if (str == NULL)
			return (NULL);
		str[0] = '-';
		(*stop)++;
		*nb = -(*nb);
	}
	return (str);
}

char	*ft_itoa(long n)
{
	int		i;
	char	*str;
	int		nb_digits;
	int		stop;
	int		digit;

	nb_digits = ft_count_digit(n);
	stop = nb_digits;
	i = 0;
	if (n < 0)
		i = 1;
	str = ft_malloc(&n, nb_digits, &stop);
	if (str == NULL)
		return (NULL);
	while (i < stop)
	{
		digit = n / ft_power(10, nb_digits - 1) % 10;
		str[i++] = digit + '0';
		nb_digits--;
	}
	str[stop] = 0;
	return (str);
}
