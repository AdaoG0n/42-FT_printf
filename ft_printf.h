/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:40:50 by adamarqu          #+#    #+#             */
/*   Updated: 2024/11/04 13:43:34 by adamarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_print_char(char c);
int	ft_print_hex(unsigned long num, int uppercase);
int	ft_print_number(int n);
int	ft_print_pointer(void *ptr);
int	ft_print_string(char *str);
int	ft_print_unsigned(unsigned int n);

#endif
