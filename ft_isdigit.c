#include <ctype.h>
#include <stdio.h>
#include <unistd.h>

int	ft_isdigit(int C)
{
	if (C >= '0' && C <= '9')
		return (1);
	return (0);
}

int	main(void)
{
	printf("ft : %d\n", ft_isdigit('9'));
	printf("isdigit : %d\n", isdigit('9'));
	return (0);
}