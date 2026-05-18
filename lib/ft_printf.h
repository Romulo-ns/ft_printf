/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 18:08:19 by romdo-na          #+#    #+#             */
/*   Updated: 2026/05/18 11:55:59 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>


int     ft_printf       (const char *, ...);
int     print_arg       (char c, va_list args );
int	    ft_putchar      (int c);
int     ft_putstr       (char *str);
int     ft_putnbr       (int n);
int		ft_putunsigned	(unsigned int n);
int		ft_puthex		(unsigned int n, char format);
int		ft_print_ptr	(unsigned long n);




#endif