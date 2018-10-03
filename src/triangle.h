#pragma once

class triangle : figure{
	public:
		triangle : figure();
		~triangle();
	private:
		float cote1;
		float cote2;
		float base;
		float hauteur;
	protected:
		setCote1(float n_cote1);
		setCote2(float n_cote2);
		setBase(float n_base);
		setHauteur(float n_hauteur);
		surface(float n_base, float n_hauteur);
		perimetre(float n_cote1, float n_cote2, float n_base);
};
