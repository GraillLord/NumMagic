#ifndef __NUM_MAGIC_C__
#define __NUM_MAGIC_C__

#include "num_magic.h"

bool compare(int nb, int rn) {

	if(nb > rn) {
		printf("Le numéro est plus petit !\n");
		return false;
	}
	else if(nb < rn) {
		printf("Le numéro est plus grand !\n");
		return false;
	}
	else if(nb == rn) {
		printf("gagné !\n");
		return true;
	}
	else {
		printf("Il y a une erreur\n");
		return false;
	}
}

#endif