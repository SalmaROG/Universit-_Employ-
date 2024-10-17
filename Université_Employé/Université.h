#pragma once
#include <memory> 
#include <string>
#include "Employé.h"
using namespace std;
const int MAX_EMPLOYES = 5;

class Université
{
private:
    string nom;
    shared_ptr<Employé> employés[MAX_EMPLOYES]; 
    int nbEmployés;  
public:
    //Constructeur avec paramétres
    Université(string nom, int nbr);

    //Destructeur
    ~Université();

    //Ajouter un employé
    void AjouterEmployé(shared_ptr<Employé> employe);

    //Afficher les employés
    void Afficher_Université() const; 
};

