/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:45:22 by orazafy           #+#    #+#             */
/*   Updated: 2022/12/03 17:45:36 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_u(va_list ap, int *result_len)
{
	unsigned int	nb;
	char			*result;

	nb = va_arg(ap, unsigned int);
	result = ft_itoa(nb);
	if (result == NULL)
		return ;
	ft_putstr(result, result_len);
	free(result);
}
