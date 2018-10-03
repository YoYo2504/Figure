#include <iostream>
#include "triangle.h"

float triangle::surface(float Base, float Hauteur)
{
	float res;
	res = float (Base * Hauteur) / 2;
	std::cout << "La surface est de " << res << std::endl;
	return (res);
}

float triangle::perimetre(float Cote1, float Cote2, float Base)
{
	float res;
	res = Cote1 + Cote2 + Base;
	std::cout << "Le perimetre est de " << res << std::endl;
	return (res);
}

