#pragma once
#include "Quete.h"
#include <vector>
using std::vector;

class Aventurier
{
private:
	int Niveau;
	vector<Quete> TabQuete;

public:
	Aventurier();
	Aventurier(int niveau, vector<Quete> tabQuete);
	~Aventurier();

	void afficherQuete();
	void ajouterQuete(Quete tabQuete);
	void init();
	int getNiv();
};

