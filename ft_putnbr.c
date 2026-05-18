/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 13:39:48 by romdo-na          #+#    #+#             */
/*   Updated: 2026/05/18 11:57:01 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(int n)
{
    long    count;
    long    nb;
	char	c;

	count = 0;
    nb = n;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
        count++;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
    count++;
	write(1, &c, 1);
    return (count);
}
