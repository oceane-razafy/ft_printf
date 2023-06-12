/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:44:20 by orazafy           #+#    #+#             */
/*   Updated: 2022/12/03 17:44:30 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_s(va_list ap, int *result_len)
{
	char	*str;

	str = va_arg(ap, char *);
	if (str == NULL)
		ft_putstr("(null)", result_len);
	else
		ft_putstr(str, result_len);
}
