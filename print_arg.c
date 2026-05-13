/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 17:46:33 by romdo-na          #+#    #+#             */
/*   Updated: 2026/05/13 14:37:52 by romdo-na         ###   ########.fr       */
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

    // else if ( c == 'p' )
    // else if ( c == 'd' )
    // else if ( c == 'i' )
    // else if ( c == 'u' )
    // else if ( c == 'x' )
    // else if ( c == 'X' )
    // else if ( c == '%' )

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