/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:28:49 by adamarqu          #+#    #+#             */
/*   Updated: 2024/11/04 13:51:49 by adamarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_hex(unsigned int num, int uppercase)
{
	int		count;
	char	*hex_lower;
	char	*hex_upper;
	char	*hex;

	count = 0;
	hex_lower = "0123456789abcdef";
	hex_upper = "0123456789ABCDEF";
	if (uppercase)
		hex = hex_upper;
	else
		hex = hex_lower;
	if (num >= 16)
		count += ft_print_hex(num / 16, uppercase);
	count += ft_print_char(hex[num % 16]);
	return (count);
}
