/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_punsigned.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmolin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 20:42:24 by josmolin          #+#    #+#             */
/*   Updated: 2026/11/12 21:18:08 by josmolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

void ft_punsigned(unsigned int ui, int count)
{
	int	temp;
	char	*t;

	if (ui < 0)
		temp = 4294967295 - (int)ui;
	else
		temp = ui;
	t = ft_itoa(temp);
	printf("This is it? %u \n", temp);
	ft_pstr(t, count);
	return  ;
}
