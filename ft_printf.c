/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobesnar <tobesnar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:51:00 by tobesnar          #+#    #+#             */
/*   Updated: 2024/11/05 17:51:00 by tobesnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		i;

	va_start(arg, format);
	i = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			i += print_format(*(++format), arg);
		else
			i += write (1, format, 1);
		++format;
	}
	va_end(arg);
	return (i);
}

int	main(void)
{
	int acc = 1;
	ft_printf("exemple %d\n", acc);
	return (0);
}
