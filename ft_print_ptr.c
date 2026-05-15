/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 16:48:33 by romdo-na          #+#    #+#             */
/*   Updated: 2026/05/15 17:19:36 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int  ft_putptr(unsigned long n)
{
    long    count;
	char	*base;

	base = "0123456789abcdef";
    count = 0;

	if (n >= 16)
		ft_putptr(n / 16);

	write(1, &base[n % 16], 1);
    count++;
    return (count);
}

int	ft_print_ptr(args)
{
	unsigned long	ptr;
    long            count;

	ptr = (unsigned long)args;
	write(1, "0x", 2);
    count = 2;
	count += ft_putptr(ptr);
    return (count);
}