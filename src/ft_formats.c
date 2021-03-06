/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:34:20 by mbugday           #+#    #+#             */
/*   Updated: 2022/03/27 09:49:34 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_formats(va_list args, const char format)
{
	int	print_length;

	print_length = 0;
	if (format == 'c')
		print_length += ft_is_c(va_arg(args, int));
	else if (format == 's')
		print_length += ft_is_s(va_arg(args, char *));
	else if (format == 'p')
		print_length += ft_is_p(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_length += ft_is_d(va_arg(args, int));
	else if (format == 'u')
		print_length += ft_is_u(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		print_length += ft_is_x(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_length += ft_is_per();
	return (print_length);
}
