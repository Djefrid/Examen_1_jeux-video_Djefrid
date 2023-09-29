#include "Fatory.h"
#include "Utilitaire.h"


Quete* Fatory::getRandomQuete()
{
    Quete* quete(0);

    if (Utilitaire::genererNb(1, 100) >= 75)
        quete = new Quete("montreal", Utilitaire::genererNb(1, 10), Utilitaire::genererNb(100, 1000), Utilitaire::genererNb(100, 2000), nivDifficulte::Facile);
    else if (Utilitaire::genererNb(1, 100) >= 15)
        quete = new Quete("Quebec", Utilitaire::genererNb(11, 25), Utilitaire::genererNb(1001, 5000), Utilitaire::genererNb(2001, 4000), nivDifficulte::Moyen);
    else if (Utilitaire::genererNb(1, 100) <= 10)
        quete = new Quete("gatineau", Utilitaire::genererNb(26, 99), Utilitaire::genererNb(5001, 35000), Utilitaire::genererNb(4001, 14000), nivDifficulte::Difficile);
    

    return quete;
}



