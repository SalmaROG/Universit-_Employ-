#include "Universit�.h"
#include "Employ�.h"
#include <memory>  // Pour std::shared_ptr

int main() {
    
    // Cr�ation d'employ�s 
    std::shared_ptr<Employ�> emp1 = std::make_shared<Employ�>(1,"Salma");
    std::shared_ptr<Employ�> emp2 = std::make_shared<Employ�>(2,"Amine");
    std::shared_ptr<Employ�> emp3 = std::make_shared<Employ�>(3,"Houda");

    // Cr�ation d'une universit�
    Universit� universit�("Universit� des Sciences", 0);

    // Ajout des employ�s � l'universit�
    universit�.AjouterEmploy�(emp1);
    universit�.AjouterEmploy�(emp2);
    universit�.AjouterEmploy�(emp3);
    

    // Affichage des employ�s de l'universit�
    universit�.Afficher_Universit�();
    return 0;
}