/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmolin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 19:59:03 by josmolin          #+#    #+#             */
/*   Updated: 2026/11/05 19:59:05 by josmolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar(char c, int width)
{
	int		res;
	int		spaces;
	char	mt;

	mt = ' ';
	res = 0;
	spaces = width - 1;
	while(spaces > 0)
	{
		write(1, &mt, 1);
		res++;
		spaces--;
	}
	write(1, &c, 1);
	res++;
	return (res);
}
