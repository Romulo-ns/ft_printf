/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 17:46:33 by romdo-na          #+#    #+#             */
/*   Updated: 2026/05/15 15:41:46 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_arg (char c, va_list args )
{
    int count;

    count = 0;
    if ( c == 'c' )
        count = ft_putchar(va_arg(args, int));
    else if ( c == 's' )
        count = ft_putstr(va_arg(args, char *));
    else if ( c == '%' )
        count = ft_putchar('%');
    else if ( c == 'd' || c == 'i' )
        count = ft_putnbr(va_arg(args, int));
    else if ( c == 'u' )
        count = ft_putunsigned(va_arg(args, unsigned int));

    // else if ( c == 'x' )
    // else if ( c == 'X' )

    return (count);
}
/*
caso s
caso c
caso u
caso d
caso i
caso e
caso p
*/