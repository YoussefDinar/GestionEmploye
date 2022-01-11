#include "Employe.h"
#include "Responsable.h"
#include "Commercial.h"

class Personnel{
    
    public:
Personnel();

unsigned size() const;
void ajouter(Employe* e);
void calculer() const;
~Personnel();


private:
vector<Employe*> emply;
Personnel(const Personnel&); 
 
};
