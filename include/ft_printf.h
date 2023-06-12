/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:39:44 by orazafy           #+#    #+#             */
/*   Updated: 2022/12/08 13:27:00 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_convert(va_list ap, const char c, int *result_len);
void	ft_printf_c(va_list ap, int *result_len);
void	ft_printf_di(va_list ap, int *result_len);
void	ft_printf_p(va_list ap, int *result_len);
void	ft_printf_percent(int *result_len, char c);
void	ft_printf_s(va_list ap, int *result_len);
void	ft_printf_u(va_list ap, int *result_len);
void	ft_putchar(char c, int *result_len);
void	ft_putstr(char	*str, int *result_len);
void	ft_create_base(char base[16], int start_letter);
char	*ft_dec_to_hex(unsigned long long nb, char *base);
int		ft_power(long nb, int power);
int		ft_count_digit(long nb);
char	*ft_malloc(long *nb, int nb_digits, int *stop);
char	*ft_itoa(long n);
void	ft_printf_x(va_list ap, int *result_len);
void	ft_printf_xmaj(va_list ap, int *result_len);

#endif
