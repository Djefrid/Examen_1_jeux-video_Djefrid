#pragma once
#include <string>
using namespace std;

enum class nivDifficulte
{
	Facile,
	Moyen,
	Difficile
};

class Quete
{
private:
	nivDifficulte Nivdificultes;
	string Nom;
	int NivMin;
	int RecompenseOr;
	int ExpRecu;



public:
	Quete();
	Quete(string nom,int nivMin,int recompenseOr,int expRecu, nivDifficulte nivdificulte);
	
	~Quete();

	nivDifficulte getDificulte();
	int getNivMin();
	int getRecompenseOr();
	int getExpRecu();

	virtual std::string to_string();
};



