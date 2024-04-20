#include "Lista.h"

Lista::Lista(){
     CreaLista();               
}

void Lista::CreaLista(){
       testa=0;                   
}

boolean Lista::ListaVuota(){
     return(testa==NULL);        
}

void Lista::ScriviLista(TipoelemLista x,posizione p){
         if(!ListaVuota())
         p->elemento=x;     
}

void Lista::InsLista(TipoelemLista x,posizione &p){
       posizione temp=new NodoLista();
       temp->elemento=x;
       temp->succ=p;
       if(p==PrimoLista()){
          testa=temp;
       }else{
           posizione prec=PrecLista(p);
           prec->succ=temp;
       }       
}

TipoelemLista Lista::LeggiLista(posizione p){
                return p->elemento;              
}

posizione Lista::PrimoLista(){
              return testa;          
}

boolean Lista::FineLista(posizione p){
             return(p==NULL)?true:false;        
}

posizione Lista::SuccLista(posizione p){
            if(!FineLista(p))
            return p->succ;          
}

posizione Lista::PrecLista(posizione p){
           posizione temp=PrimoLista();
           while(!FineLista(temp) && (temp->succ !=p)){
               temp=SuccLista(temp);
             }
          return temp;             
}

void Lista::cancLista(posizione p){
            if(!ListaVuota());
              if(p==PrimoLista()){
                  testa=testa->succ;                    
              }else{
                 posizione temp;
                 temp=PrecLista(p);
                 temp->succ=p->succ;
                 p->succ=0;      
              }
           delete p;        
}
