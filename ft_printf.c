/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 15:17:42 by romdo-na          #+#    #+#             */
/*   Updated: 2026/05/12 15:14:03 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int check_type(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' 
		|| c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}

int ft_printf(const char *str, ...)
{
	int	i;
	va_list args;

	i = 0;
	va_start(args, str);
	while(str[i++])
	{
		if (str[i] == '%')
			if (check_type(str[i +1]));
		else
			ft_putchar(str[i]);
	}

	va_end(args);
	return (0);
	
}

int main (){
	char *ptr;

	ptr = "ola mundo";
	ft_printf("%s\n", ptr);

	return(0);
}
