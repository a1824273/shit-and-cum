/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:24:17 by tytang            #+#    #+#             */
/*   Updated: 2022/06/23 13:06:34 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>*/

#include "../includes/ft_printf.h"

/*
void	ft_printchar_no_return(int c)
{
	write(1, &c, 1);
}*/

char	*itoastr(long n, char *str, int *i)
{
	if (n > 9)
	{
		itoastr(n / 10, str, i);
		itoastr(n % 10, str, i);
	}
	else
	{
		str[(*i)++] = n + '0';
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	nbr;

	nbr = n;
	str = malloc(sizeof(char) * (ft_decimal_len(nbr) + 1));
	if (!str)
		return (NULL);
	i = 0;
	if (nbr < 0)
	{
		str[i++] = '-';
		nbr *= -1;
	}
	str = itoastr(nbr, str, &i);
	str[i] = '\0';
	return (str);
}

int	ft_decimal_len(int num)
{
	static int	len;

	len = 0;
	if (num < 0)
	{
		num = -1 * num;
		len++;
	}
	while (num > 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

int	ft_printstr(char *str)
{
	int	ctr;

	ctr = 0;
	if (str == NULL)
	{
		ft_printnull();
		return (6);
	}
	while (str[ctr])
	{
		write(1, &str[ctr], 1);
		ctr++;
	}
	return (ctr);
}

int	ft_printnum(int num)
{
	int		len;
	char	*number;

	len = 0;
	number = ft_itoa(num);
	len = ft_printstr(number);
	free(number);
	return (len);
}
/*
int	main(void)
{
	printf("\n %d", ft_printnum(145));
	printf("\n %d", ft_printnum(-145));
	return (0);
}*/
