#include <iostream>
#include "Employ�.h"
using namespace std;


Employ�::Employ�(int id, string nom):id(id), nom(nom)
{
	cout << "Constructeur Employe: "  << endl;
}

Employ�::Employ�(const Employ�& emp):id(emp.id), nom(emp.nom)
{
}

Employ�::~Employ�()
{
	cout << "Destructeur Employe: " << endl;
}

void Employ�::Afficher_Employ�() const
{
	cout << "ID: " << id << " ,Nom: " << nom <<endl;
}
