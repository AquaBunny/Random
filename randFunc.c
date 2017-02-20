/******************************
*Daniel Bachler
*9-24-15
*randFunc.c
*Desc
*	File contains prototypes of advanced random funtions
*******************************/
/* rand srand*/
#include <stdlib.h>
/*time*/
#include <time.h>

/*function to roll a die of give size*/
int dieRoll(int dieType) {
	return rand() % dieType + 1;
}