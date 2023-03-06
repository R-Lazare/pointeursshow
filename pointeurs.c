#include <stdio.h>

void	afficher_a(int *a);
void	afficher_tab(int *tab, int len);

int	main(void)
{
	int a;

	a = 42;
	printf("pointeur sur a ( &a ) = %p \n", &a);	
	printf("valeur de a ( a )  = %d \n", a);
	afficher_a(&a);

	printf("------------------------------------------------------------\n");

	int tab[4];
	
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;

	printf("adresse de tab[0] (tab) = %p\nadresse de tab[1] (tab + 1) = %p\nvaleur tab[0] (tab[0]) = %d\nvaleur tab[1] : *(tab + 1) = %d \n", tab, (tab + 1), tab[0], *(tab + 1) );


	afficher_tab(tab, 4);
	return (0);	
}



void	afficher_a(int *b)
{
	printf("pointeur sur b ( b ) = %p \n", b);
	printf("valeur de b ( *b ) = %d \n", *b);
}

void	afficher_tab(int *tab, int len)
{
	int	i;
	
	printf("tab[0] (*tab) = %d\n\n", *tab);
	i = 0;
	while (i < len)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}

	i = 0;
	while (i < len)
	{
		printf("tab[%d] = %d\n", i, *(tab + i));
		i++;
	}
}

