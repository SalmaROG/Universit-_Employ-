#include "Université.h"
#include "Employé.h"
#include <memory>  // Pour std::shared_ptr

int main() {
    
    // Création d'employés 
    std::shared_ptr<Employé> emp1 = std::make_shared<Employé>(1,"Salma");
    std::shared_ptr<Employé> emp2 = std::make_shared<Employé>(2,"Amine");
    std::shared_ptr<Employé> emp3 = std::make_shared<Employé>(3,"Houda");

    // Création d'une université
    Université université("Université des Sciences", 0);

    // Ajout des employés à l'université
    université.AjouterEmployé(emp1);
    université.AjouterEmployé(emp2);
    université.AjouterEmployé(emp3);
    

    // Affichage des employés de l'université
    université.Afficher_Université();
    return 0;
}