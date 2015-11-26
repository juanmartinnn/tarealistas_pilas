#include<iostream>
#include"nodo.cpp"
using namespace std;

int main()
{
    Nodo<int> *nod1;
    nod1 = new Nodo<int>;

    Nodo<int> *nod2;
    nod2 = new Nodo<int>;

    cout<<"El primer nodo esta dirigido a: \n"<<nod1->obtenemos_siguiente()<<endl;
    cout<<"El segundo nodo esta dirigido a: \n "<<nod2->obtenemos_siguiente()<<endl;

    cout<<"\n La direccion del primer nodo es : \n"<<nod1<<endl;
    cout<<"\n La direccion del segundo nodo es: \n"<<nod2<<endl;

    Nodo<int> *nodo3;
    nodo3 = new Nodo<int>(nod1);
    cout<<"\n El tercer nodo esta ,\n dirigido al primer nodo"<<endl;
    cout<<" El tercer nodo esta dirigido a: \n"<<nodo3->obtenemos_siguiente()<<endl;

    nodo3->lointroducimos_despues_de(nod2);
    cout<<"\n Ingresamos el segundo nodo después del tercer nodo"<<endl;
    cout<<"\n El segundo nodo esta dirigido a:  \n"<<nod2->obtenemos_siguiente()<<endl;
    cout<<"\n El nodo tercer nodo esta dirigido a:  \n"<<nodo3->obtenemos_siguiente()<<endl;
    cout<<"\n Eliminamos el siguiente nodo,\n que le sigue al tercer nodo "<<endl;
    nodo3->borramos_siguiente();
    cout<<"El tercer nodo esta dirigido a:  \n"<<nodo3->obtenemos_siguiente()<<endl;

    Nodo<int> *nodo4;
    Nodo<int> *nodo5;
    Nodo<int> *nodo6;
    nodo4 = new Nodo<int>;
    nodo5 = new Nodo<int>(2);
    nodo6 = new Nodo<int>(3);
    cout<<nodo5->obtenemos_valor() + nodo6->obtenemos_valor()<<endl;
    *nodo4 = *nodo5 + *nodo6;
    cout<<nodo4->obtenemos_valor()<<endl;
    cout<<nodo5->obtenemos_valor() - nodo6->obtenemos_valor()<<endl;
    delete nod1,nod2,nodo3;

    return 0;
}
