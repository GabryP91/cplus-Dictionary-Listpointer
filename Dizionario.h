#ifndef Dizionario_h
#define Dizionario_h

#include "DatoDizionario.cpp"
#include "Elemento.h"

using namespace std;

typedef int chiave;
typedef Elemento elemento;

class Dizionario{
      public:
      virtual void Inserisci(elemento,chiave)=0;
      virtual void Cancella(chiave)=0;
      virtual Elemento Cerca(chiave)=0;   
};

#endif
