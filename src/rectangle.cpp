#include <iostream>
#include "rectangle.h"

void rectangle::setCote1(float n_cote1){
	rectangle.cote1=n_cote1;
};

void rectangle::setCote2(float n_cote2){
	rectangle.cote2=n_cote2;
};

int rectangle::surface(float cote1, float cote2){
	return (cote1 * cote2);
};

int rectangle::perimetre(float cote1, float cote2){
	return (2 * cote1 + 2 * cote2);
};
