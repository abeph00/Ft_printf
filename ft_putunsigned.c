/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:24:54 by abertran          #+#    #+#             */
/*   Updated: 2022/11/18 19:30:12 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned int nb, int *len)
{
	if (nb >= 10)
	{
		ft_putunsigned(nb / 10, len);
		ft_putunsigned(nb % 10, len);
	}
	else
		ft_putcharlen(nb + 48, len);
}
