/******************************
*Daniel Bachler
*9-24-15
*randMain.c
*Desc
*	Test file for random functions
*******************************/
/*srand*/
#include <stdlib.h>
/*time*/
#include <time.h>
/*printf*/
#include <stdio.h>
/*dieRoll*/
#include "randFunc.h"

int main(void) {
	int i, roll;
	for(i = 0; i < 20; i++){
		srand(time(0));
		roll = dieRoll(20);
		printf("You have rolled a %i\n", roll);
	}
	return 0;
}