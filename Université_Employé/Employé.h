#pragma once
#include <string>
using namespace std;
class Employ�
{
private:
    int id;
    string nom;
public:
    //Le constructeur avec param�tres
    Employ�(int id, string nom);

    //Le constructeur de recopie
    Employ�(const Employ�& emp );

    //Destructeur
    ~Employ�();

    //Afficher les informations d'un employ�
    void Afficher_Employ�()const;

};

