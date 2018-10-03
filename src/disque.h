#pragma once


class disque::figure{
	public:

		disque::figure();
		~disque();
	private:
		float rayon;

	protected:
		setRayon(float n_rayon);
		perimetre(float n_rayon);
		suraface(float n_rayon);
};


