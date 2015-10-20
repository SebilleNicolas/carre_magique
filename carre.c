#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>



int  main(int argc, char const *argv[])
{
	int NMAX = 30;
	int taille_tab;


	printf("Veuillez choisir la taille du carré magique : ");
	scanf("%d",&taille_tab);
	if (taille_tab > NMAX)
		printf("Taille trop grande, recommencez.\n");
	else
	{
		printf("La taille est de : %d \n", taille_tab);

		// Probleme avec la fonction de pointer , .........
		// int matriceaa = initialise(matrice[30][30],taill_tab);
		

	}



void initialise( int matrice[NMAX][NMAX] , int taille)
{	
	printf(" taille initialisation : %d \n", taille);
	int ligne=0;
	int col=0;
	// On initialise toutes les cases a 0
	for (ligne = 0; ligne < taille; ++ligne)
	{
		for(col = 0; col < taille; ++col)
		{
			matrice[ligne][col] = 0;
		}
	}
	// On se place sur la case juste en dessous du centre
	matrice[taille/2+1][taille/2] = 1;
	// return matrice;
}




void remplissage(int matrice[NMAX][NMAX],int taille){
	printf(" taille remplissage : %d \n", taille);
	int i,x,y,ligne,col;
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
			ligne = (ligne + (taille-1)%taille);
			col = (col +1)%taille;
		}
		matrice[ligne][col] = i;
	}
	// return matrice;
}
// printf(" COUCOU \n");



void affichage(int matrice[NMAX][NMAX], int taille){
	int ligne,col;
	printf(" taille  affichage	 :  %d \n", taille);
	for ( ligne = 0; ligne < taille; ++ligne) 		
	{
	 	for (col = 0; col < taille; ++col)
	 	{
	 		printf("%d\n", matrice[ligne][col]);
	 		// printf("\t"+ string(matrice[ligne][col]);
	 	}
	 	printf("\n");
	}

}



	return 0;
}
