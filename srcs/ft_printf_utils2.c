/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:33:15 by orazafy           #+#    #+#             */
/*   Updated: 2022/12/08 13:26:32 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *result_len)
{
	write(1, &c, 1);
	(*result_len)++;
}

void	ft_putstr(char	*str, int *result_len)
{
	while (*str)
	{
		write(1, str++, 1);
		(*result_len)++;
	}
}

void	ft_create_base(char base[16], int start_letter)
{
	int		i;
	int		j;

	i = 1;
	base[0] = '0';
	while (i < 10)
	{
		base[i] = '0' + i;
		i++;
	}
	base[i] = start_letter;
	i++;
	j = 1;
	while (i < 16)
	{
		base[i++] = start_letter + j;
		j++;
	}	
	base[i] = 0;
}
