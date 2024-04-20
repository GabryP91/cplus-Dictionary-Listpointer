#ifndef DizionarioLista_h
#define DizionarioLista_h

#include"Dizionario.h"
#include"Lista.cpp"

class DizionarioLista: public Dizionario{
 public:    
        DizionarioLista();       
        void Inserisci(elemento,chiave);
        void Cancella(chiave);
        Elemento Cerca(chiave);
       
private:
      Lista lista;
                   
};

#endif
