#pragma once
#include <string>
using namespace std;
class Employé
{
private:
    int id;
    string nom;
public:
    //Le constructeur avec paramétres
    Employé(int id, string nom);

    //Le constructeur de recopie
    Employé(const Employé& emp );

    //Destructeur
    ~Employé();

    //Afficher les informations d'un employé
    void Afficher_Employé()const;

};

