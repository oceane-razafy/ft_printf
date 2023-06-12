/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_xmaj.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:45:59 by orazafy           #+#    #+#             */
/*   Updated: 2022/12/06 17:54:56 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_xmaj(va_list ap, int *result_len)
{
	char				*result;
	unsigned int		nb;
	char				base[16];

	nb = va_arg(ap, unsigned int);
	ft_create_base(base, 'A');
	result = ft_dec_to_hex(nb, base);
	if (result == NULL)
		return ;
	ft_putstr(result, result_len);
	free(result);
}
