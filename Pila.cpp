#include<iostream>
#include"Pila.h"
using namespace std;

int main(){

    Pila pila;
    int x;
    int op;

    do
    {
        menu();  cin>> op;

        switch(op)
        {
            case 1: cout<< "\n\t INGRESE NUMERO : "; cin>> x;
                    pila.Apilar(x);
                    cout<<"\n\n\t\tNumero " << x << " apilado...\n\n";
                    break;



            case 2:
                    cout << "\n\n\t MOSTRANDO PILA\n\n";
                    if(pila.PilaVacia()!=true)
                        pila.MostrarPila(  );
                    else
                        cout<<"\n\n\tPila vacia..!"<<endl;
                    break;



         }

        cout<<endl<<endl;


    }while(op!=3);

return 0;
}

