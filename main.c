#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    //int     ft_result;
    //int     result;
    int     i;
    char    *str = NULL;
    
    i = ft_printf("%sw%p", str, str);
    ft_printf("|\n%d\n", i);
    i = 0;
    i = printf("%sw%p", str, str);
    printf("|\n%d\n", i);
        //char    *str = NULL;

    // ft_result = ft_printf(NULL);
    // result = printf(NULL);

    // printf("ft_result: %d\n", ft_result);
    // printf("result: %d\n", result);
}