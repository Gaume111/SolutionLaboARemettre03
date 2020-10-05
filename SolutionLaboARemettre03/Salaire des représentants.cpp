// But : Développez un programme qui entre les ventes brutes hebdomadaires de chaque représentant et qui calcule et
//		 affiche son salaire.Entrez - 1 à la valeur des ventes pour quitter le programme.
// Auteur : Guillaume Lafrance
// Date : 2020-10-03

#include<iostream>
using namespace std;

void main()
{
	//Déclaration des constante
	const float NB_POURCENT = 7.5; // Le pourcentage de la commission

	//Déclaration des variable
	int salaire; // Le salaire des employés sans le pourcentage des commissions
	float salaireFinal = 0; // Le salaire avec la commission
	int valeurVente; // Le montant des vente totale en une semaine
	

	cout << " Veuiller entrer un montant :";
	cin >> valeurVente;



	while (valeurVente != -1)
	{
		cout << " Veuiller entrer le montant du salaire :"; // salaire de base sans le pourcentage des ventes
		cin >> salaire;


		salaireFinal = salaire * NB_POURCENT ; // le salaire final est égal au salaire de base plus le pourcentage de la commission
		
		salaireFinal = salaireFinal + 1;

		cout << " Veuiller entrer le pourcentage de la commission :" << endl; // on entre le pourcentage de la commission
		NB_POURCENT;

	}

	cout << " le montant total du salaire est :"; // On indique le salaire total 
	cin >> salaireFinal;

}

/*
Plan test
Montant des ventes			salaire sans pourcentage		pourcentage			salaire final
5000						250								7.5					650
4000						500								10					900
1000						750								20					950
*/