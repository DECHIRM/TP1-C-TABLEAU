#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() 
{
	float t[3][4];
	float ligne, colonne, somme = 0;
	int i, j = 0;
	printf(" Entrez les %d éléments du tableau : ", 3 * 4);

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%f", &t[i][j]);
		}
	}
	for (i = 0; i < 3; i++) {
		ligne = 0;
		for (j = 0; j < 4; j++) {
			ligne = ligne + t[i][j];
		}
	}
	for (j = 0; j < 4; j++) {
		colonne = 0;
		for (i = 0; i < 3; i++) {
			colonne = colonne + t[i][j];
		}
	}
	somme = ligne + colonne;
	printf(" La somme des éléments : %f", somme);
}