#include "Quete.h"
#include "Utilitaire.h"


Quete::Quete()
{
	Nom = "montreal";
	NivMin = Utilitaire::genererNb(11, 25);
	RecompenseOr = Utilitaire::genererNb(1001, 5000);
	ExpRecu = Utilitaire::genererNb(2001, 4000);
	Nivdificultes = nivDifficulte::Moyen;
}

Quete::Quete(string nom, int nivMin, int recompenseOr, int expRecu, nivDifficulte nivdificulte)
{
	Nom = nom;
	NivMin = nivMin;
	RecompenseOr = recompenseOr;
	ExpRecu = expRecu;
	Nivdificultes = nivdificulte;
}

Quete::~Quete()
{
}

nivDifficulte Quete::getDificulte()
{
	return Nivdificultes;
}

int Quete::getNivMin()
{
	return NivMin;
}

int Quete::getRecompenseOr()
{
	return RecompenseOr;
}

int Quete::getExpRecu()
{
	return ExpRecu;
}

std::string Quete::to_string()
{
	std::string info = "";
	info.append("Nom : " + Nom + "\n");
	info.append("niveau minimal : " + std::to_string(this->NivMin) + "\n");
	info.append("recompense or : " + std::to_string(this->RecompenseOr) + "\n");
	info.append("experience recu : " + std::to_string(this->ExpRecu) + "\n");

	if (Nivdificultes == nivDifficulte::Facile)
		info.append("niveau de difficulté :  Facile");
	if (Nivdificultes == nivDifficulte::Moyen)
		info.append("niveau de difficulté :  Moyen");
	if (Nivdificultes == nivDifficulte::Difficile)
		info.append("niveau de difficulté :  Dificile");


	return info;
}
