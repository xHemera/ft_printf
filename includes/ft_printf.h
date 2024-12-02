/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobesnar <tobesnar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:38:56 by tobesnar          #+#    #+#             */
/*   Updated: 2024/12/02 14:06:15 by tobesnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include "../libft/libft.h"

int		ft_printf(const char *format, ...);
int		print_format(const char format, va_list arg);
int		ft_printnbr(int nb);
int		ft_printstr(char *str);
int		ft_printchr(int c);
int		ft_printhex(unsigned int num, const char format);
int		ft_printpercent(void);
int		ft_printptr(unsigned long long ptr);
int		ft_printunsigned(unsigned int arg);

void	ft_put_ptr(unsigned long long num);
int		ft_ptr_len(unsigned long long num);
void	ft_put_hex(unsigned int num, const char format);
int		ft_hex_len(unsigned	int num);

#endif
