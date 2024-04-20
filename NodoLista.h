#ifndef NodoLista_h
#define NodoLista_h

#include<string>
#include"DatoDizionario.h"

using namespace std;

typedef Dato TipoelemLista;

class NodoLista{
      public:
         TipoelemLista elemento;
         NodoLista * succ;        
};

#endif
