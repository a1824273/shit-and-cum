/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:16:48 by tytang            #+#    #+#             */
/*   Updated: 2022/06/23 13:07:10 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_format(va_list args, const char format)
{
	int	printlen;

	printlen = 0;
	if (format == 'c')
		printlen += ft_printchar(va_arg(args, int));
	else if (format == 's')
		printlen += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		printlen += ft_printptr(va_arg(args, unsigned long long));
	else if ((format == 'd') || (format == 'i'))
		printlen += ft_printnum(va_arg(args, int));
	else if (format == 'u')
		printlen += ft_print_unsigned_dex(va_arg(args, unsigned int));
	else if ((format == 'x') || (format == 'X'))
		printlen += ft_printhex(va_arg(args, unsigned int), format);
	else if (format == '%')
		printlen += ft_printpcent();
	return (printlen);
}

int	ft_printf(const char *src, ...)
{
	int			src_ctr;
	va_list		args;
	int			output_len;

	src_ctr = 0;
	output_len = 0;
	va_start(args, src);
	while (src[src_ctr])
	{
		if (src[src_ctr] == '%')
		{
			output_len += ft_format(args, src[src_ctr + 1]);
			src_ctr++;
		}
		else
		{
			output_len += ft_printchar(src[src_ctr]);
		}
		src_ctr++;
	}
	va_end(args);
	return (output_len);
}
