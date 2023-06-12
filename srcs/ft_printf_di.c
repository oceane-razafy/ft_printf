/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_di.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:44:57 by orazafy           #+#    #+#             */
/*   Updated: 2022/12/03 17:45:14 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_di(va_list ap, int *result_len)
{
	int		nb;
	char	*result;

	nb = va_arg(ap, int);
	result = ft_itoa(nb);
	if (result == NULL)
		return ;
	ft_putstr(result, result_len);
	free(result);
}
