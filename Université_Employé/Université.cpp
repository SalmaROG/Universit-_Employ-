#include "Universit�.h"
#include "Employ�.h"
#include <iostream>

Universit�::Universit�(string nom, int nbr):nom(nom),nbEmploy�s(nbr)
{
	std::cout << "Constructeur Universite: " << std::endl;
}

Universit�::~Universit�()
{
	std::cout << "Destructeur Universite: " << std::endl;
}

void Universit�::AjouterEmploy�(std::shared_ptr<Employ�> employe)
{
    if (this->nbEmploy�s < MAX_EMPLOYES) {
        this->employ�s[nbEmploy�s++] = employe;
        std::cout << "Employe ajoute � l'universite: "<< std::endl;
    }
    else {
        std::cout << "Impossible d'ajouter un autre employ�, capacite maximale atteinte." << std::endl;
    }
}

void Universit�::Afficher_Universit�() const
{
    std::cout << "Le nom de l'universite est : "<< this->nom << std::endl;
    std::cout << "Liste des employes de l'universite : "<< std::endl;
    for (int i = 0; i < this->nbEmploy�s; i++) {
        this->employ�s[i]->Afficher_Employ�();
    }
}

