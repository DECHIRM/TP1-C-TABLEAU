#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {

	float t[3][4];
	float sRow, sCol, somme = 0;
	int i, j = 0;

	printf(" Entrez les %d éléments du tableau : ", 3 * 4);

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%f", &t[i][j]);
		}
	}

	for (i = 0; i < 3; i++) {
		sRow = 0;
		for (j = 0; j < 4; j++) {
			sRow = sRow + t[i][j];
		}
	}

	for (j = 0; j < 4; j++) {
		sCol = 0;
		for (i = 0; i < 3; i++) {
			sCol = sCol + t[i][j];
		}
	}

	somme = sRow + sCol;
	printf(" La somme des éléments de t est de : %f", somme);

}