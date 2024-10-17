#include <iostream>
#include "Employé.h"
using namespace std;


Employé::Employé(int id, string nom):id(id), nom(nom)
{
	cout << "Constructeur Employe: "  << endl;
}

Employé::Employé(const Employé& emp):id(emp.id), nom(emp.nom)
{
}

Employé::~Employé()
{
	cout << "Destructeur Employe: " << endl;
}

void Employé::Afficher_Employé() const
{
	cout << "ID: " << id << " ,Nom: " << nom <<endl;
}
