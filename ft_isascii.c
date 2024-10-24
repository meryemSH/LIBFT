#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_isascii(24));
	printf("%d\n", isascii(24));
	return (0);
}