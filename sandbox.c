#include <unistd.h>

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
	return (0);
}
