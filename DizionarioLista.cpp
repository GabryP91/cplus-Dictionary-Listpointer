#include "DizionarioLista.h"
#include<cstdlib>
#include<iostream>
using namespace std;

DizionarioLista::DizionarioLista(){
       lista.CreaLista();
}

void DizionarioLista::Inserisci(elemento x,chiave y){
      Dato k;
      k.elemento=x;
      k.ChiaveDato=y;
      posizione pos;
      boolean trovato=false;
      pos=lista.PrimoLista();
      
      while(!lista.FineLista(pos)){
            if(lista.LeggiLista(pos).ChiaveDato==k.ChiaveDato)
                 trovato==true;
            pos=lista.SuccLista(pos);                                
      }
      if(!trovato){
         pos=lista.PrimoLista();
         lista.InsLista(k,pos);                  
      }
}

void DizionarioLista::Cancella(chiave y){
     boolean trovato=false;
     posizione pos;
     pos=lista.PrimoLista();
     while((!lista.FineLista(pos))&&(!trovato)){
            if(lista.LeggiLista(pos).ChiaveDato==y){
                lista.cancLista(pos);
                trovato=true;
            }
       pos=lista.SuccLista(pos);                                         
  }    
  cout << "Dato con chiave: "<<y<<"Cancellato. "<<endl;
}

Elemento DizionarioLista::Cerca(chiave y){
      Dato e;
      boolean trovato=false;
      posizione pos;
      pos=lista.PrimoLista();
        while((!lista.FineLista(pos))&&(!trovato)){
          if(lista.LeggiLista(pos).ChiaveDato==y){
              e=(lista.LeggiLista(pos)); 
              trovato=true;                                       
          }   
         pos=lista.SuccLista(pos);                                          
      }
     return e.elemento;     
}
