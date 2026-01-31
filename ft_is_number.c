#include "libft.h"

int ft_is_number(char *s)
{
    int i;

    i = 0;
    if (s[i] == '-' || s[i] == '+')
        i++;
    if (s[i] == '\0')
        return (0);
    while (s[i])
    {
        if (s[i] < '0' || s[i] > '9')
            return (0);
        i++;
    }
    return (1);
}