#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int ft_isalnum(char c)
{
    if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <='Z')) || (c >= '0' && c <= '9') )
    {
        return (1);
    }
    return (0);
}

int main ()
{
    printf ("%d\n",ft_isalnum('+'));
    printf ("%d\n",isalnum('+'));
    return (0);
}