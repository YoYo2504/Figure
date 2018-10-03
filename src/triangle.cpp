#include <iostream>
#include "triangle.h"

void triangle::setCote1(float n_cote1){
	triangle.cote1=n_cote1;
};

void triangle::setCote2(float n_cote2){
	triangle.cote2=n_cote2;
};

void triangle::setBase(float n_base){
	triangle.base=n_base;
};

void triangle::setHauteur(float n_hauteur){
	triangle.hauteur=n_hauteur;
};

int triangle::surface(float base, float hauteur){
	return (base * hauteur / 2);
};

int triangle::perimetre(float cote1, float cote2, float base)
	return (cote1 + cote2 + base);
};

