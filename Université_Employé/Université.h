#pragma once
#include <memory> 
#include <string>
#include "Employ�.h"
using namespace std;
const int MAX_EMPLOYES = 5;

class Universit�
{
private:
    string nom;
    shared_ptr<Employ�> employ�s[MAX_EMPLOYES]; 
    int nbEmploy�s;  
public:
    //Constructeur avec param�tres
    Universit�(string nom, int nbr);

    //Destructeur
    ~Universit�();

    //Ajouter un employ�
    void AjouterEmploy�(shared_ptr<Employ�> employe);

    //Afficher les employ�s
    void Afficher_Universit�() const; 
};

