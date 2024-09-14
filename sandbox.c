/*Écrire une fonction void ft_rev_int_tab(int *tab, int size); qui inverse les éléments 
 d'un tableau d'entiers.

tab : le tableau d'entiers à inverser.
size : la taille du tableau. */

void ft_rev_int_tab(int *tab, int size)
{
	int 	temp_tab;
	int	i;

	i = 0;
	(while i < (size / 2))
	{
		temp_tab = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[(size - 1) - i] = temp_tab;
		i++;
	}
}

#include <stdio.h>
int	main()
{

	char tab[5]={A, B, C, D, E};
	i = 0;
	ft_rev_int_tab(tab, 5);
	while (i < 5)
	printf("%d \n", tab[i]);
	return (0);
}
