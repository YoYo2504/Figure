/*!\file disque.h
* \Classe disque
* \Author --> Yoan FILIPE
* \version 1.0
*/
#pragma once
#include <iostream>
#include "figure.h"

/*!\class disque
* \Class disque: objet --> rayon
* \Class disque: méthodes --> perimetre, surface
*/

class disque: public figure{
	public:

/*!\objet --> rayon
* \type float
*/

		float rayon;

/*!\Methode --> perimetre
* \type float
* \param Rayon --> correspond au rayon du disque que l'utilisateur renseigne
* \return --> le permimetre du disque
*/

		float perimetre(float Rayon);

/*!\Methode --> surface
* \type float
* \param Rayon --> correspond au rayon du disque que l'utilisateur reseigne
* \return --> la surface du disque
*/
		float surface(float Rayon);
};


