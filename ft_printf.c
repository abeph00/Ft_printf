/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:26:03 by abertran          #+#    #+#             */
/*   Updated: 2022/11/29 19:10:37 by abertran         ###   ########.fr       */
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
	//char			*str;
	int				n, i1, i2;
	//char			c;
	// unsigned int	un;
	// str = "Marvin is a cat";
 	n = 2647;
	// c = 'a';
	// un = 234;
	// i1 = ft_printf("%s", n);
	// i2 = printf("%s", n);
	i1 = ft_printf("El numero es : %d\t \n", n);
	i2 = printf("El numero es : %d\t \n", n);
	// i1 = ft_printf("El numero es: %X\n", n);
	// i2 = printf("El numero es: %X\n", n);
	// i1 = ft_printf("El char es: %c\n", 97);
	// i2 = printf("El char es: %c\n", 97);
	// i1 = ft_printf("El n con i es: %i\n", n);
	// i2 = printf("El n con i es: %i\n", n);
	// i1 = ft_printf("El n con u es: %u\n", n);
	// i2 = printf("El n con u es: %u\n", n);
	// i1 = ft_printf("El n con X es: %X\n", n);
	// i2 = printf("El n con X es: %X\n", n);
	// i1 = ft_printf("El n con x es: %x\n", n);
	// i2 = printf("El n con x es: %x\n", n);
	// i1 = ft_printf("Recibiendo: %%\n");
	// i2 = printf("Recibiendo: %%\n");
	// i1 = ft_printf("Recibiendo void*: %p\n", &c);
	// i2 = printf("Recibiendo void*: %p\n", &c);
	printf ("%i - %i\n", i1, i2);
}
*/
