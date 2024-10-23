#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int ft_isalpha(char c) 
{
    if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
        return 0;
    return 1;      
}

int main()
{    
    printf("ft : %d\n", ft_isalpha('a'));
    printf("isalpha : %d\n", isalpha('a'));
    return 0;
}
