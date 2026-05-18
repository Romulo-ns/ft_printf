/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 14:50:29 by romdo-na          #+#    #+#             */
/*   Updated: 2026/05/18 12:23:33 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putunsigned(unsigned int n)
{
    long    count;
    long    nb;

    count = 0;
    nb = n;
	if (nb >= 10)
		count += ft_putunsigned(nb / 10);
	count += ft_putchar((nb % 10) + '0');
    return (count);
}