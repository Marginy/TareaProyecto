#ifndef COCODRILO_H
#define COCODRILO_H
#include "Enemygo.h"

class Cocodrilo:public Enemygo
{
    public:
        Cocodrilo(Personaje * personaje);
        void logica();
        virtual ~Cocodrilo();
    protected:
    private:
};

#endif // COCODRILO_H
