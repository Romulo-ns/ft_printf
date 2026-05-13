/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 12:28:50 by romdo-na          #+#    #+#             */
/*   Updated: 2026/05/13 20:12:06 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *args)
{
	size_t	len;
	
	len = 0;
	if (!args)
		return (0);
	while (args[len])
	{
		len += ft_putchar(args[len]);
	}
	return(len);
}
