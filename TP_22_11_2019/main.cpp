#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include "CVecteur.h"
using namespace std; //utiliser pour raccourcie la ligne d'affichage

int main()
{
	int nb = 0;
	//float choixX, choixY, choixZ;
	bool verif;

//-----------------------------------------------------------------------------------------------------------------------------------------------------
//Exo 69
//question a)
	/*
	cout << "1=vecteur de base ou 2=Vecteur a renseigner :" << endl; //on demande quel constructeur on doit utiliser
	cin >> nb; //on récupèr son choix
	if (nb==2) 
	{
		cout << "X :" << endl;
		cin >> choixX;
		cout << "Y :" << endl;
		cin >> choixY;
		cout << "Z :" << endl;
		cin >> choixZ;
		CVecteur MonVecteur(choixX, choixY, choixZ);
		cout << "Votre vecteur a pour valeur" << endl;
		cout << "X : " << MonVecteur.getX() << endl;
		cout << "Y : " << MonVecteur.getY() << endl;
		cout << "Z : " << MonVecteur.getZ() << endl;
	}
	else {
		CVecteur MonVecteur;
		cout << "Votre vecteur a pour valeur" << endl;
		cout << "X : " << MonVecteur.getX() << endl;
		cout << "Y : " << MonVecteur.getY() << endl;
		cout << "Z : " << MonVecteur.getZ() << endl;
	}
	*/
//------------------------------------------------------------------------------------------------------------------------------------------------------
//question b)
	/*
	cout << "X :" << endl;
	cin >> choixX;
	cout << "Y :" << endl;
	cin >> choixY;
	cout << "Z :" << endl;
	cin >> choixZ;
	CVecteur MonVecteur(choixX, choixY, choixZ);

	cout << "Votre vecteur est : " << endl;
	cout << "X : " << MonVecteur.getX() << endl;
	cout << "Y : " << MonVecteur.getY() << endl;
	cout << "Z : " << MonVecteur.getZ() << endl;
	*/
//---------------------------------------------------------------------------------------------------------------------------------------------------------
//Exo 70
/*
	CVecteur VecteurUn(2,8,4);
	CVecteur VecteurDeux(9,7,5);

	verif = VecteurUn.CoincideValeur(VecteurUn, VecteurDeux);
	cout << "Teste par valeur : " << verif << endl;

	verif = VecteurUn.CoincideAdresse(&VecteurUn, &VecteurDeux);
	cout << "Teste par adresse : " << verif << endl;

	verif = VecteurUn.CoincideReference(VecteurUn, VecteurDeux);
	cout << "Teste par reference : " << verif << endl;
*/
//------------------------------------------------------------------------
//Exo 71
/*
	CVecteur VecteurUn(3, 5, 2);
	CVecteur VecteurDeux(4, 8, 9);
	float norme;

	norme = VecteurUn.NormaxValeur(VecteurUn, VecteurDeux);  //Norme par Valeur
	norme = VecteurUn.NormaxReference(VecteurUn, VecteurDeux);  //Norme par reference
	norme = VecteurUn.NormaxAdresse(&VecteurUn, &VecteurDeux);  //Norme par adresse
*/
//-----------------------------------------------------------------------------
//Exo 72
/*
	CVecteur VecteurUn(8,7,6);
	CVecteur VecteurDeux(4,8,3);
	CVecteur Somme();

	cout << "Premier vecteur : " << endl;
	VecteurUn.affichage();
	cout << "Deuxième vecteur : " << endl;
	VecteurDeux.affichage();
	cout << "Somme des deux vecteurs : " << endl;
	CVecteur Somme = VecteurUn.SommeVecteur(VecteurUn, VecteurDeux);	//Je n'est pas réussi a le faire fonctionner
	cout << "Produit scalaire des deux vecteurs : " << endl;
	VecteurUn.PrdScalaire(VecteurUn, VecteurDeux);
*/
//----------------------------------------------------------------------
//Exo 73
/*
	CVecteur VecteurTest(7, 5, 3);	//A la création de la classe, le constructeur incrémente le "cpt" nombre
	int nombre(); //il pourra voir le nombre grace a cette fonction
*/

//------------------------------------------------------------------------
	system("pause");
	return 0;
}
