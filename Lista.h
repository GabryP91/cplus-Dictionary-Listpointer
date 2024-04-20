#ifndef Lista_h
#define Lista_h
#include "NodoLista.h"

typedef bool boolean;
typedef NodoLista * posizione;

class Lista{
public:
      Lista();
      void CreaLista();
      boolean ListaVuota();
      void ScriviLista(TipoelemLista,posizione);
      void InsLista(TipoelemLista,posizione&);
      TipoelemLista LeggiLista(posizione);
      posizione PrimoLista();
      boolean FineLista(posizione);
      posizione SuccLista(posizione);
      posizione PrecLista(posizione);
      void cancLista(posizione);     
private:
     posizione testa;
};

#endif
