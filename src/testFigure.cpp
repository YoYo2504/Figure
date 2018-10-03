#include <iostream>
#include <stdlib.h>
#include "disque.h"
#include "rectangle.h"
#include "triangle.h"

using namespace std;

int main(){
	int choose1, choose2;
	int a, b, c;

	welcome:

	cout << "Choisissez une forme géométrique :" << endl;
	cout << "-___________________________________-"<<endl;
	cout << "Tapez 1 pour le Disque"<<endl;
	cout << "Tapez 2 pour le Rectangle" <<endl;
	cout << "Tapez 3 pour le Triangle"<<endl;
	cout << "-___________________________________-"<<endl;
	cout << "Tapez 4 pour quitter" << endl;
	cout << "-___________________________________-"<<endl;

	cin >> choose1;

	switch (choose1){
		case 1 :{
			disque disque1;
			cout << "Tapez 1 pour calculer la surface"<<endl;
			cout << "Tapez 2 pour calculer le perimetre" << endl;
			cin >> choose2;
				if(choose2 == 1){
					cout << "Saisir la valeur du rayon sous la forme 00.00"<<endl;
					cin >> a;
					disque1.surface(a);
					goto welcome;
				}
				else{
					cout << "Saisir la valeur du rayon sous la forme 00.00"<<endl;
					cin >> a;
					disque1.perimetre(a);
					goto welcome;
				}
		break;}
		case 2 :{
			rectangle rectangle1;
			cout << "Tapez 1 pour calculer la surface"<<endl;
			cout << "Tapez 2 pour calculer le perimetre" << endl;
			cin >> choose2;
				if(choose2 == 1){
					cout << "Saisir la valeur de la longueur sous la forme 00.00" << endl;
					cin >> a;
					cout << "Saisir la valeur de la largeur sous la forme 00.00" <<endl;
					cin >> b;
					rectangle1.surface(a,b);
					goto welcome;
				}
				else{
					cout << "Saisir la valeur de la longueur sous la forme 00.00"<<endl;
					cin >> a;
					cout << "Saisir la valeur de la largeur sous la forme 00.00"<<endl;
					cin >>b;
					rectangle1.perimetre(a,b);
					goto welcome;
				}
		break;}
		case 3 :{
			triangle triangle1;
			cout<< "Tapez 1 pour calculer la surface"<<endl;
			cout<<"Tapez 2 pour calculer le perimetre"<<endl;
			cin >> choose2;
				if(choose2 == 1){
					cout << "Saisir la valeur de la base sous la forme 00.00"<<endl;
					cin >> a;
					cout<<"Saisir la valeur de la hauteur sous la forme 00.00"<<endl;
					cin >> b;
					triangle1.surface(a,b);
					goto welcome;
				}
				else{
					cout << "Saisir la valeur du cote 1 sous la forme 00.00"<<endl;
					cin>>a;
					cout <<"Saisir la valeur du cote 2 sous la forme 00.00"<<endl;
					cin>>b;
					cout<<"Saisir la valeur de la base sous la forme 00.00"<<endl;
					cin >> c;
					triangle1.perimetre(a,b,c);
					goto welcome;
				}
		break;}
		case 4:
			goto stop;
				stop: ;
			system("clear");
		}
	}
