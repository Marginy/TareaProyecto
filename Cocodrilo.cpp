#include "Cocodrilo.h"

Cocodrilo::Cocodrilo(Personaje * personaje)
{
    this->x=20;
    this->y=30;
    sprites.push_back(IMG_Load("Endless Run/croc01.png"));
    sprites.push_back(IMG_Load("Endless Run/croc03.png"));
    sprites.push_back(IMG_Load("Endless Run/croc04.png"));
    sprites.push_back(IMG_Load("Endless Run/croc05.png"));


}

Cocodrilo::~Cocodrilo()
{
    //dtor
}
void Cocodrilo::logica(){
x++;
y--;
if (x==640){
x=220;
y=38;
}
}
