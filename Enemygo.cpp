#include "Enemygo.h"

Enemygo::Enemygo()
{
    x=300;
    y=200;

}

Enemygo::~Enemygo()
{
    //dtor
}
void Enemygo::Dibujar(SDL_Surface*screen){
 //Holds offsets
    SDL_Rect offset;

    //Get offsets
    offset.x = this->x;
    offset.y = this->y;

    //Blit
    SDL_BlitSurface( this->sprites[0], NULL, screen, &offset );
}
void Enemygo::logica(){
this->x++;
if (x==600)
    x=-5;
    x++;

}
