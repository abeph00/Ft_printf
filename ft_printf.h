/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:27:24 by abertran          #+#    #+#             */
/*   Updated: 2022/11/18 19:51:48 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(char const	*str, ...);
void	ft_putcharlen(char c, int *len);
void	ft_putstrlen(char *str, int *len);
void	ft_putnbrlen(int nb, int *len);
void	ft_puthex(unsigned long long nb, char *base, int *len);
void	ft_putunsigned(unsigned int nb, int *len);

#endif