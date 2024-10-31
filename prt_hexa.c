/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_hexa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:09:17 by adamarqu          #+#    #+#             */
/*   Updated: 2024/10/29 11:09:18 by adamarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	h_digits(unsigned int n)
{
	size_t	digits;

	digits = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		digits += 1;
		n /= 16;
	}
	return (digits);
}

static void	put_hexa(unsigned int nbr, bool upper_case)
{
	static char	upper_digits[] = "0123456789ABCDEF";
	static char	lower_digits[] = "0123456789abcdef";

	if (nbr >= 16)
		put_hexa((nbr / 16), upper_case);
	if (upper_case == true)
		write(STDOUT_FILENO, &upper_digits[nbr % 16], 1);
	else
		write(STDOUT_FILENO, &lower_digits[nbr % 16], 1);
}

int	prt_hexa(unsigned int nbr, bool upper_case)
{
	put_hexa(nbr, upper_case);
	return (h_digits(nbr));
}
