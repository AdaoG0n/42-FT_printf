/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_str.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:09:07 by adamarqu          #+#    #+#             */
/*   Updated: 2024/10/29 11:09:10 by adamarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	prt_str(char const *str)
{
	if (str == NULL)
		return (write(1, "(null)", 6));
	else
		return (write(1, str, ft_strlen(str)));
}
