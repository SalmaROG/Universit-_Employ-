#include "Université.h"
#include "Employé.h"
#include <iostream>

Université::Université(string nom, int nbr):nom(nom),nbEmployés(nbr)
{
	std::cout << "Constructeur Universite: " << std::endl;
}

Université::~Université()
{
	std::cout << "Destructeur Universite: " << std::endl;
}

void Université::AjouterEmployé(std::shared_ptr<Employé> employe)
{
    if (this->nbEmployés < MAX_EMPLOYES) {
        this->employés[nbEmployés++] = employe;
        std::cout << "Employe ajoute à l'universite: "<< std::endl;
    }
    else {
        std::cout << "Impossible d'ajouter un autre employé, capacite maximale atteinte." << std::endl;
    }
}

void Université::Afficher_Université() const
{
    std::cout << "Le nom de l'universite est : "<< this->nom << std::endl;
    std::cout << "Liste des employes de l'universite : "<< std::endl;
    for (int i = 0; i < this->nbEmployés; i++) {
        this->employés[i]->Afficher_Employé();
    }
}

