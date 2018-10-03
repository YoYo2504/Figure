#pragma once

class rectangle : figure{
	public:
		rectangle : figure();
		~rectangle();
	private:
		float cote1;
		float cote2;
	protected:
		setCote1(float n_cote1);
		setCote2(float n_cote2);
		surface(float n_cote1, float n_cote2);
		perimetre(float n_cote1, float n_cote2);
};


