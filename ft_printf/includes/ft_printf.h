/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:17:02 by tytang            #+#    #+#             */
/*   Updated: 2022/06/23 13:44:09 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_printchar_no_return(int c);
int		hex_length_ctr(int num);
int		ft_ptr_len(uintptr_t num);
int		ft_decimal_len(int c);
int		ft_printnull(void);
int		ft_printchar(int c);
int		ft_printstr(char *str);
int		ft_printptr(unsigned long long ptr);
int		ft_printstr(char *str);
int		ft_printnum(int num);
int		ft_print_unsigned_dex(long long int num);
void	ft_print_hex(long long int num, char format);
int		ft_printhex(long long int num, char format);
int		ft_printpcent(void);

#endif
