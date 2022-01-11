
#include "Employe.h"

using namespace std;

int Employe::count = 0;
float Employe::val = 50;

Employe::Employe(string nom, string prenom, float indice)
    : matricule(++Employe::count)
{
    this->nom = nom;
    this->prenom = prenom;
    this->indice_sal = indice;
    

}

Employe::Employe() :matricule(++Employe::count)
{
}

void Employe::afficher() const
{
   // std::cout << "afficher de la classe employe" << std::endl;
    std::cout << "nom :" << this->nom << std::endl;
    std::cout << "prenom :" << this->prenom << std::endl;
    std::cout << "matricule :" << this->matricule << std::endl;
    std::cout << "indice  :" << this->indice_sal << std::endl;

}

float Employe::calcul_salaire() const
{
    float salaire = this->indice_sal * Employe::val;
    return salaire;
}

Employe::~Employe()
{
    std::cout << "destructeur de la classe employe" << std::endl;
}
