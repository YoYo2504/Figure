/*!\file rectangle.h
* \Class rectangle
* \Author --> Yoan FILIPE
* \version 1.0
*/

#pragma once
#include <iostream>
#include "figure.h"

/*!\class rectangle
*\class rectangle: objets --> longueur, largeur
*\class rectangle: methode --> surface, perimetre
*/

class rectangle: public figure{
	public:

/*!\objet --> longueur
*\type float
*/
		float longueur;

/*!\objet --> largeur
*\type float
*/

		float largeur;

/*!\methode --> surface
*\type float
*\param Longueur --> correspond a la longueur du rectangle que l'utilisateur renseigne
*\param Largeur --> correspond a la largeur du rectangle que l'utilisateur reseigne
*\return --> la surface du rectangle
*/
		float surface(float Longueur, float Largeur);

/*!\methode --> perimetre
*\type float
*\param Longueur --> correspond à la longueur du rectangle que renseigne l'utilisateur
*\param Largeur--> correspond a la largeur du rectangle que renseigne m'utilisateur
*\return --> le perimetre du rectangle
*/

		float perimetre(float Longueur, float Largeur);
};


