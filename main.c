/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmolin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 19:59:31 by josmolin          #+#    #+#             */
/*   Updated: 2026/11/05 21:09:41 by josmolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft/libft.h"
#include <stdio.h> // Optional, if you want to compare with standard printf

int main(void)
{
	int x = 42;

	// Passing a format string containing all the types, 
	// followed by the exact matching arguments in order!
	ft_printf("Char here: %5c %10s %p %d %i %u %x %X %%", 
		'K',              // c
		"42 Barcelona",   // s
		(void *)&x,       // p
		-42,              // d
		42,               // i
		4294967295U,      // u
		505,              // x (1f9)
		505               // X (1F9)
		// %% doesn't consume an argument!
	);
    return (0);
}
