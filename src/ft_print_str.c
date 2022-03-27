/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:13:14 by mbugday           #+#    #+#             */
/*   Updated: 2022/03/27 09:53:36 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_is_s(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_is_s("(null)");
		return (6);
	}
	while (str[i])
	{
		ft_is_c(str[i]);
		i++;
	}
	return (i);
}
