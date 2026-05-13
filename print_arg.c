/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 17:46:33 by romdo-na          #+#    #+#             */
/*   Updated: 2026/05/13 11:31:20 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void print_arg (char c, va_list args )
{
    if ( c == 'c' )
        ft_putchar(args);
    // else if ( c == 's' )
    // else if ( c == 'p' )
    // else if ( c == 'd' )
    // else if ( c == 'i' )
    // else if ( c == 'u' )
    // else if ( c == 'x' )
    // else if ( c == 'X' )
    // else if ( c == '%' )
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