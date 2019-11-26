#include "CVecteur.h"
#include <iostream>
using namespace std;

//getter
float CVecteur::getX()
{
	return X;
}

float CVecteur::getY()
{
	return Y;
}

float CVecteur::getZ()
{
	return Z;
}

//setter
void CVecteur::setX(float X)
{
}

void CVecteur::setY(float Y)
{
}

void CVecteur::setZ(float Z)
{
}

//-------------------------------------------------
//Exo 69
//Queston a)

/*
CVecteur::CVecteur()
{
	X = 0;
	Y = 0;
	Z = 0;
}

CVecteur::CVecteur(float choixX, float choixY, float choixZ)
{
	X = choixX;
	Y = choixY;
	Z = choixZ;
}
*/
//--------------------------------------------
//question b)
/*
CVecteur::CVecteur(float choixX, float choixY, float choixZ)
{
	X = choixX;
	Y = choixY;
	Z = choixZ;
}
*/
//-------------------------------------------------------------------
//Exo 70
/*
CVecteur::CVecteur(float X, float Y, float Z)
{
	this->X = X;
	this->Y = Y;
	this->Z = Z;
}

bool CVecteur::CoincideValeur(CVecteur VecteurUn, CVecteur VecteurDeux) //On teste la coincidence par la valeurs
{
	if ((VecteurUn.X == VecteurDeux.X) && (VecteurUn.Y == VecteurDeux.Y) && (VecteurUn.Z == VecteurDeux.Z))
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool CVecteur::CoincideAdresse(CVecteur* VecteurUn, CVecteur* VecteurDeux) //On teste la coincidence par l'adresse
{
	if ((VecteurUn->X == VecteurDeux->X) && (VecteurUn->Y == VecteurDeux->Y) && (VecteurUn->Z == VecteurDeux->Z))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool CVecteur::CoincideReference(CVecteur& VecteurUn, CVecteur& VecteurDeux) //On teste la coincidence par la reference
{
	if ((VecteurUn.X == VecteurDeux.X) && (VecteurUn.Y == VecteurDeux.Y) && (VecteurUn.Z == VecteurDeux.Z))
	{
		return true;
	}
	else
	{
		return false;
	}
}
*/
//----------------------------------------------------------------
//Exo 71
/*
CVecteur::CVecteur(float X, float Y, float Z)
{
	this->X = X;
	this->Y = Y;
	this->Z = Z;
}

float CVecteur::NormaxValeur(CVecteur VecteurUn, CVecteur VecteurDeux)
{
	float v1 = (VecteurUn.X * VecteurUn.X) + (VecteurUn.Y * VecteurUn.Y) + (VecteurUn.Z * VecteurUn.Z);
	float v2 = (VecteurDeux.X * VecteurDeux.X) + (VecteurDeux.Y * VecteurDeux.Y) + (VecteurDeux.Z * VecteurDeux.Z);
	if (v1>v2)
	{
		return v1;
	}
	else
	{
		return v2;
	}

}

float CVecteur::NormaxReference(CVecteur& VecteurUn, CVecteur& VecteurDeux)
{
	float v1 = (VecteurUn.X * VecteurUn.X) + (VecteurUn.Y * VecteurUn.Y) + (VecteurUn.Z * VecteurUn.Z);
	float v2 = (VecteurDeux.X * VecteurDeux.X) + (VecteurDeux.Y * VecteurDeux.Y) + (VecteurDeux.Z * VecteurDeux.Z);
	if (v1 > v2)
	{
		return v1;
	}
	else
	{
		return v2;
	}
}

float CVecteur::NormaxAdresse(CVecteur* VecteurUn, CVecteur* VecteurDeux)
{
	float v1 = (VecteurUn->X * VecteurUn->X) + (VecteurUn->Y * VecteurUn->Y) + (VecteurUn->Z * VecteurUn->Z);
	float v2 = (VecteurDeux->X * VecteurDeux->X) + (VecteurDeux->Y * VecteurDeux->Y) + (VecteurDeux->Z * VecteurDeux->Z);
	if (v1 > v2)
	{
		return v1;
	}
	else
	{
		return v2;
	}
}
*/
//-------------------------------------------------------------------------------------
//Exo 72
/*
CVecteur::CVecteur()
{
}

CVecteur::CVecteur(float X, float Y, float Z)
{
	this->X = X;
	this->Y = Y;
	this->Z = Z;
}

void CVecteur::affichage()
{
	cout << "X : " << X << ",Y : " << Y << ",Z : " << Z << endl;

}

CVecteur CVecteur::SommeVecteur(CVecteur VecteurUn, CVecteur VecteurDeux)
{
	CVecteur Somme;
	Somme.X = VecteurUn.X + VecteurDeux.X;
	Somme.Y = VecteurUn.Y + VecteurDeux.Y;
	Somme.Z = VecteurUn.Z + VecteurDeux.Z;
	return Somme;
}

float CVecteur::PrdScalaire(CVecteur VecteurUn, CVecteur VecteurDeux)
{
	return (VecteurUn.X * VecteurDeux.X + VecteurUn.Y * VecteurDeux.Y + VecteurUn.Z * VecteurDeux.Z);
}
*/
//------------------------------------------------------------------------------------------------------------
//Exo 73
/*

int CVecteur::nombre()
{
	return this->nombre;
}

CVecteur::CVecteur(float,float,float)
{
	this->X = X;
	this->Y = Y;
	this->Z = Z;
	this->nombre = this->nombre+1;

}
*/

//---------------------------------------------------------------------------
//destructeur
CVecteur::~CVecteur()
{
}
