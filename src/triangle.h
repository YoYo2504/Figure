#pragma once
#include <iostream>
#include "figure.h"

class triangle: public figure{
	public:
		float base;
		float cote1;
		float cote2;
		float hauteur;

		float perimetre(float Cote1, float Cote2, float Base);
		float surface(float Base, float Hauteur);

};
