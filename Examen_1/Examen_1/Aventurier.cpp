#include "Aventurier.h"
#include <iostream>
#include "Utilitaire.h"
#include "Fatory.h"

Aventurier::Aventurier()
{
	Niveau = 13;
}

Aventurier::Aventurier(int niveau, vector<Quete> tabQuete)
{
	Niveau = niveau;
	TabQuete = tabQuete;
}

Aventurier::~Aventurier()
{
}

void Aventurier::afficherQuete()
{
	for (auto item : TabQuete)
		std::cout << item.to_string();
}

void Aventurier::ajouterQuete(Quete tabQuete)
{
	TabQuete.push_back(tabQuete);
}

void Aventurier::init()
{
	TabQuete.push_back(Quete("Quebec", Utilitaire::genererNb(11, 25), Utilitaire::genererNb(1001, 5000), Utilitaire::genererNb(2001, 4000), nivDifficulte::Moyen));
}

int Aventurier::getNiv()
{
	return Niveau;
}
