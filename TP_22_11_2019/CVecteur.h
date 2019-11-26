#pragma once
class CVecteur
{
private:
	float X;
	float Y;
	float Z;
	int nombre;

public:
	//Prototype
	float getX();
	float getY();
	float getZ();

	void setX(float X);
	void setY(float Y);
	void setZ(float Z);

//---------------------------------------------
//Exo 69
	/*
	//constructeur de base question a)
	CVecteur();

	//constructeur question a)
	CVecteur(float, float, float);
	*/
//---------------------------------------------

	//constructeur question b)
	//CVecteur(float = 1, float = 1, float = 1);

//---------------------------------------------
	//constructeur question c)
	//inline CVecteur(float X = 2, float Y = 2, float Z = 2);

//----------------------------------------------------------------
//Exo 70
/*
	CVecteur(float, float, float);

	bool CoincideValeur(CVecteur VecteurUn, CVecteur VecteurDeux);
	bool CoincideAdresse(CVecteur* VecteurUn, CVecteur* VecteurDeux);
	bool CoincideReference(CVecteur& VecteurUn, CVecteur& VecteurDeux);
*/
//---------------------------------------------------------------------
//Exo 71
/*
	CVecteur(float, float, float);

	float NormaxValeur(CVecteur VecteurUn, CVecteur VecteurDeux);
	float NormaxReference(CVecteur& VecteurUn, CVecteur& VecteurDeux);
	float NormaxAdresse(CVecteur* VecteurUn, CVecteur* VecteurDeux);
*/
//--------------------------------------------------------------------------------
//Exo 72
/*
	CVecteur();
	CVecteur(float, float, float);

	void affichage();
	CVecteur SommeVecteur(CVecteur, CVecteur);
	float PrdScalaire(CVecteur, CVecteur);
*/
//--------------------------------------------------------------------------------
//Exo 73
/*
	int nombre();
	CVecteur(float,float,float);
*/
	//destructeur
	~CVecteur();
};
