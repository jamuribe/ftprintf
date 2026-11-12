#include "libftprintf.h"

int ft_ppointer(void *p)
{
	int 		res;
	unsigned int	placeholder;

	placeholder = (unitptr_t)p;
	res = 0;
	if (*p > 0)
		write(1, "0x", 2);
	else
		ft_putchar_fd('0', 1);
	ft_puthex(placeholder);
	return (res);
}
