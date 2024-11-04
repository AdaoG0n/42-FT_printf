/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:19:23 by adamarqu          #+#    #+#             */
/*   Updated: 2024/11/04 13:51:22 by adamarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_number(int n)
{
	int				count;
	unsigned int	num;

	count = 0;
	if (n < 0)
	{
		count += ft_print_char('-');
		num = (unsigned int)(-n);
	}
	else
		num = (unsigned int)n;
	if (num >= 10)
		count += ft_print_number(num / 10);
	count += ft_print_char((num % 10) + '0');
	return (count);
}
