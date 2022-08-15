
#pragma once
#include <allegro.h>
// estructura de coordenadas de un rect�ngulo (izq, sup, der, inf)
typedef struct {
    int x0, y0, x1, y1;
} Rect;

class Menu {
private:
    BITMAP* fondoBase;      // fondo del men� sin destacar un �tem
    BITMAP* fondos[4];      // arreglo de 4 im�genes para los �tems
//BITMAP* fondo0;
    BITMAP* cursor;
//    BITMAP* over;
//    BITMAP* imag_vida;
//    BITMAP* fnivel;
//    BITMAP* explo2;

    static const Rect items[4]; // coordenadas de cada �tem del men�

    bool sobreItem(int i);      // funci�n que detecta si el mouse est� sobre uno de los �tems

public:
    Menu();
int draw(BITMAP*);

    void gameover(BITMAP*);
//    void vidas(BITMAP*,int);
//    void nivel(BITMAP*);
//    void explosion(BITMAP*,int,int);
};
