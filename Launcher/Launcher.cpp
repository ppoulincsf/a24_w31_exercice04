#include "pch.h"
#include <iostream>
#include "TableauDynamique.h"
using namespace std;
int main()
{
	TableauDynamique tab1(10);		// Tableau de 10 éléments initialisés à 0
	TableauDynamique tab2(7, 25);	// Tableau de 7 éléments initialisés à 25
	
	cout << "Tableau 1 initialise à 0" << endl;
	tab1.afficherTableau();

	tab1.setElement(5, 17);
	tab1.setElement(8, 19);
	cout << "Tableau 1 avec 17 en position 5 et 19 en position 8" << endl;
	tab1.afficherTableau();

	cout << "Tableau 1 avec 41 ajoute en 11e position" << endl;
	tab1.ajouterElement(41);
	tab1.afficherTableau();

	cout << "Tableau 2 initialise a 25" << endl;
	tab2.afficherTableau();
	for (int i = 0; i < 7; i++)
	{
		tab2.setElement(i, tab2.getElement(i) * 2);	// Doubler tous les éléments
	}
	cout << "Tableau 2 avec tous les elements doubles" << endl;
	tab2.afficherTableau();

	tab1.insererElement(3, 23);
	cout << "Tableau 1 avec la valeur 23 ajoutée en position 3" << endl;
	tab1.afficherTableau();

	tab1.retirerElement(0);
	cout << "Tableau 1 avec le retrait de la valeur en position 0" << endl;
	tab1.afficherTableau();

	tab1.concatenerTableau(tab2);
	cout << "Tableau 1 avec la concaténation du tableau 2" << endl;
	tab1.afficherTableau();

	system("pause");

}
