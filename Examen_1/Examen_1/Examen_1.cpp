#include <iostream>
#include <string>
using std::cout;
using std::endl;
#include "Quete.h"
#include "Utilitaire.h"
#include "Fatory.h"
#include "Aventurier.h"


int main()
{
	Quete* maquete1 = new Quete();
	cout << maquete1->to_string();
	delete maquete1;


	Aventurier monAventurier;
	monAventurier.init();

	for (int i = 0; i < 12; i++)
	{
		Fatory mafact;


		if (monAventurier.getNiv() > 11 && mafact.getRandomQuete()->getNivMin() <= 10)
			monAventurier.ajouterQuete(mafact.getRandomQuete());
		else if (monAventurier.getNiv() > 11 && mafact.getRandomQuete()->getNivMin() > 10 && mafact.getRandomQuete()->getNivMin() < 15 && monAventurier.getNiv() < 15)
			monAventurier.ajouterQuete(mafact.getRandomQuete());
		else if (mafact.getRandomQuete()->getNivMin() < 15 && monAventurier.getNiv() < 15)
			delete mafact.getRandomQuete();
		if (monAventurier.getNiv() > 15 && mafact.getRandomQuete()->getNivMin() <= 15)
			monAventurier.ajouterQuete(mafact.getRandomQuete());
		else if (monAventurier.getNiv() > 15 && mafact.getRandomQuete()->getNivMin() > 15 && mafact.getRandomQuete()->getNivMin() < 25 && monAventurier.getNiv() < 25)
			monAventurier.ajouterQuete(mafact.getRandomQuete());
		else if (mafact.getRandomQuete()->getNivMin() < 25 && monAventurier.getNiv() < 25)
			delete mafact.getRandomQuete();
	}

	monAventurier.afficherQuete();

}


