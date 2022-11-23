/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:14:22 by abertran          #+#    #+#             */
/*   Updated: 2022/11/18 19:24:29 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstrlen(char *str, int *len)

{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstrlen("(null)", len);
		return ;
	}
	while (str[i] != '\0')
	{
		ft_putcharlen(str[i], len);
		i++;
	}
}
