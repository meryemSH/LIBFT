#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
int	main(void)
{
	int cou = ft_strlen("Meryem");
	printf("ft : %d\n", cou);
	printf("strlen : %ld\n", strlen("Meryem"));
	return (0);
}