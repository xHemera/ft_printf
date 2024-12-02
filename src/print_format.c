/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobesnar <tobesnar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:01:18 by tobesnar          #+#    #+#             */
/*   Updated: 2024/12/02 14:09:37 by tobesnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	print_format(const char format, va_list arg)
{
	int	i;

	i = 0;
	if (format == 'c')
		i += ft_printchr(va_arg(arg, int));
	else if (format == 's')
		i += ft_printstr(va_arg(arg, char *));
	else if (format == 'd' || format == 'i')
		i += ft_printnbr(va_arg(arg, int));
	else if (format == 'x' || format == 'X')
		i += ft_printhex(va_arg(arg, unsigned int), format);
	else if (format == '%')
		i += ft_printpercent();
	else if (format == 'p')
		i += ft_printptr(va_arg(arg, unsigned long long));
	else if (format == 'u')
		i += ft_printunsigned(va_arg(arg, unsigned int));
	return (i);
}
