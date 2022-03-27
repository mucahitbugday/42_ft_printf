/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:36:17 by mbugday           #+#    #+#             */
/*   Updated: 2022/03/27 09:56:49 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_ptr_len(unsigned long num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_put_ptr(unsigned long num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_is_c(num + '0');
		else
			ft_is_c(num - 10 + 'a');
	}
}

int	ft_is_p(unsigned long ptr)
{
	int	len;

	len = 0;
	len += ft_is_s("0x");
	if (ptr == 0)
		len += ft_is_c('0');
	else
	{
		ft_put_ptr(ptr);
		len += ft_ptr_len(ptr);
	}
	return (len);
}
