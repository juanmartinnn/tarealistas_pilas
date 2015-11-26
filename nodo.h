template<typename T>
class Nodo{
private:
    T value;
    Nodo<T> *Nodo_siguiente;
public:

    Nodo();
    Nodo(T n);
    Nodo(T n, Nodo<T>* nodo_nuevo);
    Nodo(Nodo<T>* nodo_nuevo);

    void lointroducimos_despues_de(Nodo<T> *nodo_nuevo);

    Nodo<T>* borramos_siguiente();

    void set_value(T n);
    void set_next(Nodo<int> *nodo_nuevo){Nodo_siguiente = nodo_nuevo;}

    T obtenemos_valor() {return value;}
    Nodo<T>* obtenemos_siguiente(){return Nodo_siguiente;}

    Nodo<T> operator+(Nodo<T> n_2)
    {
        Nodo<T> n_3;
        n_3.value = value + n_2.obtenemos_valor();
        return n_3;
    }
};


