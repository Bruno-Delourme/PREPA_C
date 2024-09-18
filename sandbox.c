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
{
	int length;

	length = ft_strlen("Hello World!\n");
	printf("%d \n", length);
	return (0);
}
