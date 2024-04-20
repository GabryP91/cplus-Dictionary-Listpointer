#ifndef DatoDizionario_h
#define DatoDizionario_h

#include<string>
#include "Elemento.h"

using namespace std;

class Dato{
public:
           Dato();
           Dato(int,Elemento);
           int ChiaveDato;
           Elemento elemento;       
};

#endif
