/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:34:12 by orazafy           #+#    #+#             */
/*   Updated: 2022/12/08 15:00:27 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		result_len;

	if (str == NULL)
		return (-1);
	result_len = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_convert(ap, *str, &result_len);
		}
		else
		{
			write(1, str, 1);
			result_len++;
		}
		str++;
	}
	va_end(ap);
	return (result_len);
}

void	ft_convert(va_list ap, const char c, int *result_len)
{
	if (c == 'c')
		ft_printf_c(ap, result_len);
	else if (c == 's')
		ft_printf_s(ap, result_len);
	else if (c == 'p')
		ft_printf_p(ap, result_len);
	else if (c == 'd' || c == 'i')
		ft_printf_di(ap, result_len);
	else if (c == 'u')
		ft_printf_u(ap, result_len);
	else if (c == 'x')
		ft_printf_x(ap, result_len);
	else if (c == 'X')
		ft_printf_xmaj(ap, result_len);
	else if (c == '%')
		ft_printf_percent(result_len, c);
}
