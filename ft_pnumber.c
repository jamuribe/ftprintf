/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pnumber.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmolin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 20:17:22 by josmolin          #+#    #+#             */
/*   Updated: 2026/11/12 20:28:14 by josmolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_pnumber(int num, int count)
{
	char	*strnum;

	strnum = ft_itoa(num);
	ft_pstr(strnum, 0);
	return ;
}
