#include <iostream>
#include "rectangle.h"

float rectangle::surface(float Longueur, float Largeur){
	float res;
	res = Longueur * Largeur;
	std::cout << "La surface est de " << res << std::endl;
	return (res);
}

float rectangle::perimetre(float Longueur, float Largeur){
	float res;
	res = 2 * float(Longueur + Largeur);
	std::cout << "Le perimetre est de " << res << std::endl;
	return (res);
}
