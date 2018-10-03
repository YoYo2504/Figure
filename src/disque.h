#pragma once
#include <iostream>
#include "figure.h"

class disque: public figure{
	public:
		float rayon;

		float perimetre(float Rayon);
		float surface(float Rayon);
};


