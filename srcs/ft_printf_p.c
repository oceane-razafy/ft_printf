/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:44:35 by orazafy           #+#    #+#             */
/*   Updated: 2022/12/06 17:54:35 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_p(va_list ap, int *result_len)
{
	char				*result;
	unsigned long long	nb;
	char				base[16];

	nb = (unsigned long long)va_arg(ap, void *);
	if (nb == 0)
	{
		ft_putstr("(nil)", result_len);
		return ;
	}
	ft_create_base(base, 'a');
	result = ft_dec_to_hex(nb, base);
	if (result == NULL)
		return ;
	write(1, "0x", 2);
	*result_len = *result_len + 2;
	ft_putstr(result, result_len);
	free(result);
}
