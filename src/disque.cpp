#include <iostream>
#include <math.h>
#include "disque.h"

float disque::surface(float Rayon)
{
	float res;
	res = Rayon * M_PI;
	std::cout << "La surface est de " << res << std::endl;
	return (res);
}

float disque::perimetre(float Rayon)
{
	float res;
	res = 2 * M_PI * Rayon;
	std::cout << "Le perimetre est de " << res << std::endl;
	return (res);
}
