#include <iostream>
#include "disque.h"

void disque::setRayon(float n_rayon)
{
	disque.rayon=n_rayon;
};

int disque::surface(float rayon)
{
	return (3.14 * (rayon * rayon));
};

int disque::perimetre(float rayon)
{
	return (2 * 3.14 * rayon);
};
