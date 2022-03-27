/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:37:39 by mbugday           #+#    #+#             */
/*   Updated: 2022/03/27 09:52:23 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_formats(va_list args, const char format);
int		ft_is_c(int c);
int		ft_is_s(char *str);
int		ft_is_p(unsigned long ptr);
int		ft_is_d(int n);
int		ft_is_u(unsigned int n);
int		ft_is_x(unsigned int num, const char format);
int		ft_is_per(void);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);

#endif