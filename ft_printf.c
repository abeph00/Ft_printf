/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:26:03 by abertran          #+#    #+#             */
/*   Updated: 2022/11/23 15:23:40 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_change(va_list args, const char format, int *len)
{
	if (format == 'c')
		ft_putcharlen(va_arg(args, int), len);
	if (format == 's')
		ft_putstrlen(va_arg(args, char *), len);
	if (format == 'p')
	{
		ft_putstrlen("0x", len);
		ft_puthex(va_arg(args, unsigned long long), "0123456789abcdef", len);
	}
	if (format == 'd' || format == 'i')
		ft_putnbrlen(va_arg(args, long int), len);
	if (format == 'u')
		ft_putunsigned(va_arg(args, unsigned int), len);
	if (format == 'x')
		ft_puthex(va_arg(args, unsigned int), "0123456789abcdef", len);
	if (format == 'X')
		ft_puthex(va_arg(args, unsigned int), "0123456789ABCDEF", len);
	if (format == '%')
		ft_putcharlen('%', len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start (args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_change(args, str[i + 1], &len);
			i++;
		}
		else
			ft_putcharlen(str[i], &len);
	i++;
	}
	va_end(args);
	return (len);
}
/*
int	main(void)
{
	char			*str;
	int				n;
	char			c;
	unsigned int	un;
	str = "Marvin is a cat";
	n = 92233;
	c = 'a';
	un = 234;
	ft_printf("El string es: %s\n", NULL);
	printf("El string es: %s\n", NULL);
	ft_printf("El string es: %s\n", str);
	printf("El string es: %s\n", str);
	ft_printf("El numero es: %d\n", n);
	printf("El numero es: %d\n", n);
	ft_printf("El char es: %c\n", c);
	printf("El char es: %c\n", c);
	ft_printf("El n con i es: %i\n", n);
	printf("El n con i es: %i\n", n);
	ft_printf("El n con u es: %u\n", n);
	printf("El n con u es: %u\n", n);
	ft_printf("El n con X es: %X\n", n);
	printf("El n con X es: %X\n", n);
	ft_printf("El n con x es: %x\n", n);
	printf("El n con x es: %x\n", n);
	ft_printf("Recibiendo: %%\n");
	printf("Recibiendo: %%\n");
	ft_printf("Recibiendo void*: %p\n", str);
	printf("Recibiendo void*: %p\n", str);
}
*/