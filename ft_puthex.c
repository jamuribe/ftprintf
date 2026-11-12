#include "libftprintf.h"

void ft_puthex(unsigned int n)
{
	char *base16[16];

	base16 = "0123456789abcdef";

	if (n >= 16)
		ft_puthex(n / 16);
	ft_putchar_fd(n % 16, 1);
}
