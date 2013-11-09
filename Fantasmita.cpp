#include "Fantasmita.h"

Fantasmita::Fantasmita(Personaje *Personaje)
{
    sprites.push_back(IMG_Load("Endless Run/volador01.png"));
    sprites.push_back(IMG_Load("Endless Run/volador02.png"));
    sprites.push_back(IMG_Load("Endless Run/volador03.png"));

    this->x = 300;
}

Fantasmita::~Fantasmita()
{
}

