/*!\file triangle.h
*\ class triangle
*\ Author --> Yoan FILIPE
*\ version 1.0
*/
#pragma once
#include <iostream>
#include "figure.h"

/*!\class triangle
*\class triangle : objets --> base, cote1, cote2, hauteur
*\class triangle: methodes --> perimetre, surface
*/

class triangle: public figure{
	public:

/*!\objet --> base
*\type float
*/
		float base;

/*!\objet --> cote1
*\type float
*/
		float cote1;

/*!\objet -->cote2
*\type float
*/
		float cote2;

/*!\objet --> hauteur
*\type float
*/
		float hauteur;

/*!\methode --> perimetre
*\type float
*\param Cote1 --> correspond au premier cote du triangle que renseigne l'utilisateur
*\param Cote2 --> correspond au second cote du triangle que reseigne l'utilisateur
*\param Base --> correspond à la base du triangle, soit le dernier cote, que reseigne l'utilisateur
*\return --> le perimetre du triangle
*/

		float perimetre(float Cote1, float Cote2, float Base);

/*!\methode --> surface
*\type float
*\param Base --> correspond a la base du triangle que l'utilisateur renseigne
*\param Hauteur --> correspond à la hauteur du triangle que l'utilisateur renseigne
*\return --> la surface du triangle
*/

		float surface(float Base, float Hauteur);

};
