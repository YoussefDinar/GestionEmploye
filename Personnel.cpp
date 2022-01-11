#include"Personnel.h"


Personnel::Personnel(){

}


Personnel::~Personnel(){
cout<<"desc pers"<<endl;
}


unsigned Personnel::size() const
{
return emply.size();
}


void Personnel::ajouter(Employe*e)
{emply.push_back(e);}


void Personnel::calculer() const {

if(emply.empty())
{
return ;
}

    const unsigned l= size();
    double sm = 0.0;

for(unsigned j = 0; j<l; ++j)
{
emply[j]->Employe::afficher();
double s= emply[j]->Employe::calcul_salaire();
cout<<" \n salaire="<<s<<endl;
sm +=s;
}

cout<<"\nTotal des salaires="<<sm<<" ||nombre d’employes :"<<l<<" ||Salaire moyen="<<sm/l<<endl;

}

