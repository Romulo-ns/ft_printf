/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 14:50:29 by romdo-na          #+#    #+#             */
/*   Updated: 2026/05/18 11:57:30 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putunsigned(unsigned int n)
{
    long    count;
    long    nb;
	char	c;

    count = 0;
    nb = n;
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
    count++;
	write(1, &c, 1);
    return (count);
}