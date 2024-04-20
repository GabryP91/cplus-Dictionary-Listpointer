#include <cstdlib>
#include <iostream>
#include "DizionarioLista.cpp"

using namespace std;

void TestDizionario();
void TestLista();


int main(int argc, char *argv[])
{
    
    
    TestDizionario();
    //TestLista();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}


void TestDizionario(){
     

    DizionarioLista dizionario;
    Elemento x;

    int y=1;
    x.nome="Marco";
    dizionario.Inserisci(x,y);
    y=2;
    x.cognome="Bianchi";
    dizionario.Inserisci(x,y);
    y=3;
    x.matricola="123456";
    dizionario.Inserisci(x,y);
   
   cout<<"Nome corrispondente alla chiave 1: "
        <<dizionario.Cerca(1).nome<<endl;
   cout<<"Cognome corrispondente alla chiave 2: "    
        <<dizionario.Cerca(2).cognome<<endl;
   cout<<"Matricola corrispondente alla chiave 3: "      
        <<dizionario.Cerca(3).matricola<<endl;
}

void TestLista(){
     
    //test lista
    Lista lista;
    lista.CreaLista();
    Dato d;
    d.elemento.nome="pippo";
    d.ChiaveDato=1;
    posizione p;
    p=lista.PrimoLista();
    lista.InsLista(d, p);
    
    cout << "Valore lista inserito: " 
         << lista.LeggiLista(lista.PrimoLista()).ChiaveDato << " - "
         << lista.LeggiLista(lista.PrimoLista()).elemento.nome <<endl;

    //svuoto lista
    lista.cancLista(lista.PrimoLista());
    if (lista.ListaVuota()) cout << "Lista svuotata" << endl;
    else cout << "Qualcosa non va, c'� qualcosa in lista " << endl;
}

