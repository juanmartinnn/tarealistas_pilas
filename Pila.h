#include<iostream>
using namespace std;
struct nodo{
    int nro;
    struct nodo *sgte;
};

typedef struct nodo *Puntero;

class Pila{
    public:
        Pila(void);
        void Apilar(int );
        bool PilaVacia(void);
        void MostrarPila(void);


    private:
        Puntero cima;

};
Pila::Pila(void){
    cima=NULL;
}

bool Pila::PilaVacia(void){
    if(cima==NULL)
        return true;
    else
        return false;
}

void Pila::Apilar(int x){

    Puntero p_aux;
    p_aux=new(struct nodo);
    p_aux->nro=x;
    p_aux->sgte=cima;
    cima=p_aux;

}



void Pila::MostrarPila(void){
    Puntero p_aux;
    p_aux=cima;

    while(p_aux!=NULL){
        cout<<"\t "<<p_aux->nro<<endl;
        p_aux=p_aux->sgte;
    }
}


void menu(void)
{

    cout<<" 1. INGRESAR NUMERO A APILAR     "<<endl;
    cout<<" 2. MOSTRAR PILA    "<<endl;
    cout<<" 3. SALIR           "<<endl;

    cout<<"\t Ingrese opcion: ";
}
