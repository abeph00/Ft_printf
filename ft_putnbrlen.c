/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:54:18 by abertran          #+#    #+#             */
/*   Updated: 2022/11/23 12:57:11 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrlen(int nb, int *len)
{
	if (nb == -2147483648)
	{
		ft_putcharlen('-', len);
		ft_putcharlen('2', len);
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putcharlen('-', len);
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbrlen(nb / 10, len);
		ft_putnbrlen(nb % 10, len);
	}
	else
	{
		ft_putcharlen(nb + 48, len);
	}
}
