#include <stdio.h>

void	afficher_a(int *a);

int	main(void)
{
	int a;

	a = 42;
	printf("pointeur sur a ( &a ) = %p \n", &a);	
	printf("valeur de a ( a )  = %d \n", a);
	afficher_a(&a);
	return (0);	
}

void	afficher_a(int *b)
{
	printf("pointeur sur b ( b ) = %p \n", b);
	printf("valeur de b ( *b ) = %d \n", *b);
}
