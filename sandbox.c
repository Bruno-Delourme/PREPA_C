#include <unistd.h>
#include <stdio.h>

void	ft_print_numbers()
{
	char nb;	
	nb = '0';
	while(nb <= '9')
	{
		write(1, &nb, 1);
		nb++;
	}
}
int main()
{
	ft_print_numbers();
	return (0);
}
