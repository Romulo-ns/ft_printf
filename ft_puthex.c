/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 16:17:59 by romdo-na          #+#    #+#             */
/*   Updated: 2026/05/15 16:19:00 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, char format)
{
	char	*base;
	int		count;

	count = 0;

	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";

	if (n >= 16)
	{
		count += ft_puthex(n / 16, format);
		count += ft_puthex(n % 16, format);
	}
	else
	{
		count += ft_putchar(base[n]);
	}
	return (count);
}