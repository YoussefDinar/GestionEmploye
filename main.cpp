#include <iostream>

#include "Employe.h"
#include "Responsable.h"
#include "Commercial.h"
#include"Personnel.h"



int main()
{
    
Personnel pers ;

    Employe* E1 = new Employe("emp1", "emp1", 20);
    Employe* E4 = new Responsable("emp4", "emp4", 25, "chef3");


    Responsable* Chef2 = new Responsable("chef2", "chef2", 35, "chef2");
    Responsable* ceo = new Responsable("Ceo", "Ceo", 40, "Ceo");
    Responsable* chef1 = new Responsable("chef1", "chef1", 30, "chef1");

    Chef2->add_subor(E4);
    chef1->add_subor(Chef2);
    ceo->add_subor(chef1);
    ceo->add_subor(E1);
    ceo->afficher();
 
 
 cout<<"--PERSONNEL--"<<endl;

 pers.ajouter(E4);
 pers.ajouter(E1);
 pers.ajouter(Chef2);
 pers.ajouter(ceo);
 pers.ajouter(chef1);
 pers.calculer();
return 0;
}