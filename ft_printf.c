/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:36:50 by adamarqu          #+#    #+#             */
/*   Updated: 2024/11/04 13:11:13 by adamarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_type(const char **format, va_list args)
{
	int	count;

	count = 0;
	(*format)++;
	if (**format == 'c')
		count += ft_print_char(va_arg(args, int));
	else if (**format == 's')
		count += ft_print_string(va_arg(args, char *));
	else if (**format == 'd' || **format == 'i')
		count += ft_print_number(va_arg(args, int));
	else if (**format == 'p')
		count += ft_print_pointer(va_arg(args, void *));
	else if (**format == 'u')
		count += ft_print_unsigned(va_arg(args, unsigned int));
	else if (**format == 'x' || **format == 'X')
		count += ft_print_hex(va_arg(args, unsigned int),
				**format == 'X');
	else
		count += write (1, "%", 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			count += format_type(&format, args);
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (count);
}
