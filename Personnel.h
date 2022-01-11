#include "Employe.h"
#include "Responsable.h"
#include "Commercial.h"

class Personnel{
    
    public:
Personnel();
~Personnel();
unsigned size() const;
void ajouter(Employe* e);
void calculer() const;



private:
vector<Employe*> emply;
Personnel(const Personnel&); 
 
};
