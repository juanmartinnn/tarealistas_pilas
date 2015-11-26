#include"nodo.h"
#include<iostream>
template<typename T>
Nodo<T>::Nodo()
    {
        value = 0;
        Nodo_siguiente = NULL;
    }
template<typename T>
Nodo<T>::Nodo(T n)
    {
        value = n;
        Nodo_siguiente = NULL;
    }
template<typename T>
Nodo<T>::Nodo(T n, Nodo<T>* nodo_nuevo)
    {
        value = n;
        Nodo_siguiente = nodo_nuevo;
    }
template<typename T>
Nodo<T>::Nodo(Nodo<T>* nodo_nuevo)
    {
        value = 0;
        Nodo_siguiente = nodo_nuevo;
    }

template<typename T>
void Nodo<T>::lointroducimos_despues_de(Nodo<T> *nodo_nuevo)
    {
        nodo_nuevo->Nodo_siguiente = this->Nodo_siguiente;

        this->Nodo_siguiente = nodo_nuevo;

    }

template<typename T>
Nodo<T>* Nodo<T>::borramos_siguiente()
    {
        Nodo<T> * temp_Nodo = Nodo_siguiente;
        if (Nodo_siguiente !=  NULL)
            Nodo_siguiente = Nodo_siguiente->Nodo_siguiente;

        return temp_Nodo;
    }
