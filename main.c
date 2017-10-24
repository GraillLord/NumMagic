#ifndef __MAIN_C__
#define __MAIN_C__

#include "num_magic.h"

/**
 * \file main.c
 * \brief Num_Magic program.
 * \author Antoine.M
 * \version 1.0
 * \date 24 Octobre 2017
 *
 * A program that compares 2 numbers, a random generated number with an input player's number
 * The program runs as long as the player hasn't given the right number
 *
 */

int main() {
	bool isWin = false;
	int myNum;

	printf("Le but du jeu est de découvrir le nombre magique !\n");

	srand(time(NULL));
	int r = rand() % 51;

	while(!isWin) {
		printf("Veuillez sélectionner un nombre:\n");
		scanf("%d", &myNum);
		isWin = compare(myNum, r);
	}

	return 0;
}

#endif