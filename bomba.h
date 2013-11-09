#ifndef BOMBA_H
#define BOMBA_H
#include "Enemygo.h"

class bomba:public Enemygo
{
    public:
        bomba(Personaje *Personaje);
        virtual ~bomba();
        void logica();
    protected:
    private:
};

#endif // BOMBA_H
