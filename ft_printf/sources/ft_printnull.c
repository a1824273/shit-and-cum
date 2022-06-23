/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnull.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tytang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:33:38 by tytang            #+#    #+#             */
/*   Updated: 2022/06/23 13:06:19 by tytang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printnull(void)
{
	char	*empty;
	int		counter;

	empty = "(null)";
	counter = 0;
	while (empty[counter])
	{
		write(1, &empty[counter], 1);
		counter++;
	}
	return (counter);
}
