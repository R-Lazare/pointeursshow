#include <stdio.h>

void	afficher_a(int *a);

int	main(void)
{
	int a;

	a = 42;
	printf("pointeur sur a ( &a ) = %p \n\n", &a);	
	printf("valeur de a ( a )  = %d \n\n", a);
	afficher_a(&a);

	printf("------------------------------------------------------------\n");

	int tab[4];
	
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;

	printf("adresse de tab[0] : %p\n\nadresse de tab[1] : %p\n\nvaleur tab[0] = %d\n\nvaleur tab[1] : *(tab + 1) = %d \n", &tab, (tab + 1), tab[0], *(tab + 1) );


	return (0);	
}



void	afficher_a(int *b)
{
	printf("pointeur sur b ( b ) = %p \n\n", b);
	printf("valeur de b ( *b ) = %d \n\n", *b);
}
