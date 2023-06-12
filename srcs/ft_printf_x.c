/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:45:41 by orazafy           #+#    #+#             */
/*   Updated: 2022/12/06 17:54:44 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_x(va_list ap, int *result_len)
{
	char				*result;
	unsigned int		nb;
	char				base[16];

	nb = va_arg(ap, unsigned int);
	ft_create_base(base, 'a');
	result = ft_dec_to_hex(nb, base);
	if (result == NULL)
		return ;
	ft_putstr(result, result_len);
	free(result);
}
