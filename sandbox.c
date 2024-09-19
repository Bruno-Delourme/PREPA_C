#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
    int len;
    len = 0;

	while (*str)
	{
		str++;
        len++;
	}
    return (len);
}

int	main(void)


	printf("%d \n", ft_strlen("Hello Wooorld!!"));
	return (0);
}
