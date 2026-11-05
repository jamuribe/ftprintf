/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmolin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 19:58:48 by josmolin          #+#    #+#             */
/*   Updated: 2026/11/05 19:58:52 by josmolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	map_args(va_list args, char const *format, int width)
{
	size_t	len;

	len = 1;
	switch(*format) {
		case 'c':
			len += ft_putchar((char)va_arg(args, int), width);
			//printf("Char => %c \n", (char)va_arg(args, int));
			break;
		case 's':
			printf("String here => %s \n", va_arg(args, char *));
			break;
		case 'p':
			printf("Pointer => %p \n", va_arg(args, char *));
			break;
		case 'd':
		case 'i':
			printf("Int => %d \n", va_arg(args, int));
			break;
		case 'u':
			printf("Unsigned: %u\n", va_arg(args, unsigned int));
			break;
		case 'x':
			printf("hex lowe: %x\n", va_arg(args, unsigned int));
			break;
		case 'X':
			printf("hex upper: %x\n", va_arg(args, unsigned int));
			break;
		case '%':
			printf("Percent: %%\n");
			break;
	}
	return (len);
}

int	ft_printf(char const *format, ...)
{
	va_list args;
	int		width;

	width = 0;
	va_start(args, format); // Initialize the list with the fixed parameter
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format >= '0' && *format <= '9')
			{
				width = (width * 10) + (*format - '0');
				format++;
			}
			map_args(args, format, width);
			continue;
		}
		//write(1, &*format, 1);
		format++;
	}
	return (0);
}
