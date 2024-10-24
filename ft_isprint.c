#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_isprint(30));
	printf("%d\n", isprint(30));
	return (0);
}