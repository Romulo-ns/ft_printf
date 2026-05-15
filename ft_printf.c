/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 15:17:42 by romdo-na          #+#    #+#             */
/*   Updated: 2026/05/15 15:43:17 by romdo-na         ###   ########.fr       */
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
	int	count;
	va_list args;

	count = 0;
	i = 0;
	va_start(args, str);
	while(str[i])
	{
		if (str[i] == '%')
		{
			if (check_type(str[i + 1]))
			{
				i++;
				count += print_arg(str[i], args);
				// printf("hamburguer %s\n", va_arg(args, int *));
				// print_arg(str[i], args[a]);
			}
		}
		else
		{
			count++;
			write(1, &str[i], 1);
		}
		i++;
	}

	va_end(args);
	return (count);
	
}

int main (){
	char	*ptr1;
	int		nbm1;

	ptr1 = "ahhh%hhhhhhh";
	nbm1 = -123;
	ft_printf("oioi %% %s agora numeros: %u\n", ptr1, nbm1);
	printf("oioi %% %s agora numeros: %u\n", ptr1, nbm1);

	return(0);
}
