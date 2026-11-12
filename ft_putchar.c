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
	
	res = ft_pwidth(width);
	ft_putchar_fd(c, 1);
	res++;
	return (res);
}
