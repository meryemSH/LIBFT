#include <ctype.h>
#include <stdio.h>
#include <unistd.h>

int	ft_isalpha(char c)
{
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
		return (0);
	return (1);
}

int	main(void)
{
	printf("ft : %d\n", ft_isalpha('a'));
	printf("isalpha : %d\n", isalpha('a'));
	return (0);
}
