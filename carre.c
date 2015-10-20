#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>




void initialise( int matrice[NMAX][NMAX] , int taille)
// {	On initialise toutes les cases a 0
	for (int ligne = 0; i < taille; ++i)
	{
		for (int col = 0; col < taille; ++i)
		{
			matrice[ligne][col] = 0;
		}
	}
	// On se place sur la case juste en dessous du centre
	matrice[taille/2+1][taille/2] = 1;
}




void remplissage(int matrice[NMAX][NMAX],int taille){
	int i,x,y;
	ligne = taille/2+1;
	col = taille/2;


	// i = valeur de la case
	for(i = 2; i < taille*taille;i++)
	{
		ligne = (ligne+1)%taille;
		col = (col+1)%taille;
		// Si la case est deja prise
		if (matrice[ligne][col] != 0)
		{
			ligne = (ligne + (taille -1)%taille;
			col = (col +1)%taille;
		}
		matrice[ligne][col] = i;
	}
}

void affichage(int matrice[NMAX][NMAX], int taille){
 for ( col = 0; col < taille; ++col)
 {
 	for (ligne i = 0; i < count; ++i)
 	{
 		printf("\t"+matrice[ligne][col]);
 	}
 	printf("\n");
 }

}


int int main(void)
{
	int taille;
	int NMAX = 30;
	printf("Veuillez choisir la taille du carré magique : ");
	scanf("%f",&taille);
	if (taille > NMAX)
		printf("Taille trop grande, recommencez.\n");
	else
	{
		
	}

	return 0;
}
