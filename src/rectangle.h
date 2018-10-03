#pragma once
#include <iostream>
#include "figure.h"

class rectangle: public figure{
	public:
		float longueur;
		float largeur;

		float surface(float Longueur, float Largeur);
		float perimetre(float Longueur, float Largeur);
};


