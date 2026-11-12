#include "libftprintf.h"

int	ft_pwidth(int width)
{
	int		res;
	int		spaces;
	char	mt;

	mt = ' ';
	res = 0;
	spaces = width -1;
	while(spaces > 0)
	{
		ft_putchar_fd(mt, 1);
		res++;
		spaces--;
	}
	return (res);
}
