/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 12:31:32 by romdo-na          #+#    #+#             */
/*   Updated: 2026/05/18 13:20:17 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/ft_printf.h"
#include <stdio.h>
#include <limits.h>

void	print_header(char *title)
{
	printf("\n========================================\n");
	printf("  TESTING SPECIFIER: %s\n", title);
	printf("========================================\n");
}

int	main(void)
{
	int		ret_orig;
	int		ret_custom;
	char	*str;
	void	*ptr;

	// 1. Character Conversion (%c)
	print_header("%c (Characters)");
	ret_orig = printf("Original: [%c] [%c] [%c]\n", 'A', '7', '@');
	ret_custom = ft_printf("Custom  : [%c] [%c] [%c]\n", 'A', '7', '@');
	printf("Return Value -> Original: %d | Custom: %d\n", ret_orig, ret_custom);

	// 2. String Conversion (%s)
	print_header("%s (Strings)");
	str = "42 Porto Bootcamp";
	ret_orig = printf("Original: [%s] [%s]\n", str, "");
	ret_custom = ft_printf("Custom  : [%s] [%s]\n", str, "");
	printf("Return Value -> Original: %d | Custom: %d\n", ret_orig, ret_custom);
	
	// Edge Case: NULL Pointer String
	printf("\n-- Edge Case: NULL String --\n");
	ret_orig = printf("Original NULL: [%s]\n", (char *)NULL);
	ret_custom = ft_printf("Custom NULL  : [%s]\n", (char *)NULL);
	printf("Return Value -> Original: %d | Custom: %d\n", ret_orig, ret_custom);

	// 3. Signed Integer Conversions (%d and %i)
	print_header("%d and %i (Signed Integers)");
	ret_orig = printf("Original: [%d] [%i] [%d] [%d]\n", 0, -42, INT_MAX, INT_MIN);
	ret_custom = ft_printf("Custom  : [%d] [%i] [%d] [%d]\n", 0, -42, INT_MAX, INT_MIN);
	printf("Return Value -> Original: %d | Custom: %d\n", ret_orig, ret_custom);

	// 4. Unsigned Integer Conversion (%u)
	print_header("%u (Unsigned Integers)");
	ret_orig = printf("Original: [%u] [%u]\n", 4294967295U, 0);
	ret_custom = ft_printf("Custom  : [%u] [%u]\n", 4294967295U, 0);
	printf("Return Value -> Original: %d | Custom: %d\n", ret_orig, ret_custom);

	// 5. Hexadecimal Conversions (%x and %X)
	print_header("%x and %X (Hexadecimals)");
	ret_orig = printf("Original low: [%x] | Original up: [%X] | Zero: [%x]\n", 255, 255, 0);
	ret_custom = ft_printf("Custom low  : [%x] | Custom up  : [%X] | Zero: [%x]\n", 255, 255, 0);
	printf("Return Value -> Original: %d | Custom: %d\n", ret_orig, ret_custom);

	// 6. Pointer Conversion (%p)
	print_header("%p (Pointers)");
	ptr = &str;
	ret_orig = printf("Original: [%p] [%p]\n", ptr, NULL);
	ret_custom = ft_printf("Custom  : [%p] [%p]\n", ptr, NULL);
	printf("Return Value -> Original: %d | Custom: %d\n", ret_orig, ret_custom);

	// 7. Percent Sign (%%)
	print_header("%%%% (Percent Sign)");
	ret_orig = printf("Original: [%%] [%% %%]\n");
	ret_custom = ft_printf("Custom  : [%%] [%% %%]\n");
	printf("Return Value -> Original: %d | Custom: %d\n", ret_orig, ret_custom);

	return (0);
}