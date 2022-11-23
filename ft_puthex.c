/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:34:12 by abertran          #+#    #+#             */
/*   Updated: 2022/11/18 19:55:40 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long long nb, char *dic, int *len)
{
	if (nb >= 16)
	{
		ft_puthex(nb / 16, dic, len);
		ft_puthex(nb % 16, dic, len);
	}
	else
		ft_putcharlen(dic[nb], len);
}
