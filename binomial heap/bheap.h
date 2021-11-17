#ifndef BHEAP_H
#define BHEAP_H
#include "nodob.h"
#include <list>
#include <iostream>

template <class T>
class BHeaps
{
private:
    std::list<NodoB<T> *> m_Roots;
    NodoB<T> *m_Min;

private:
    NodoB<T> *Unir(NodoB<T> *p, NodoB<T> *q);       // falta julio
    void Compactar();                               // falta alejandro

public:
    BHeaps(){}
    void Insert(T d);                       // O(log(n))
    void Delete(NodoB<T> *e);               // O(log(n))
    void Decrease_key(NodoB<T> *&p, T val); // O(log(n))
    void Extrac_Min();                      // O(log(n))
    void Show_Dot();                                // falta samuel
    NodoB<T> *GetMin(); // O(1)
};

//------------------------------
template <class T>
NodoB<T>* BHeaps<T>::Unir(NodoB<T> *p, NodoB<T> *q)
{
    // Unir dos arboles binomiales de grado k-1, en un arbol binomial de grado k
    // Asegurar que el puntero al padre se actualize
    std::cout << "Make your code here" << '\n';

}
template <class T>
void BHeaps<T>::Compactar()
{
    std::cout << "Make your code here" << '\n';
    // Verificar que todos los nodos de la raiz tengan un grado distinto.
    // En caso tengan el mimo grado, entonces llama  a Unir
    // Colocar el puntero al menor en el menor de los nodos raiz

    if( m_Roots.size() != 1 )
    {
        typename std::list<NodoB<T>*>::iterator p = m_Roots.begin();
        typename std::list<NodoB<T>*>::iterator q = ++(m_Roots.begin());
        while()
        
    }
}

//--------------------------------
template <class T>
void BHeaps<T>::Insert(T d)
{
    NodoB<T> *pNew = new NodoB<T>(d); // O(1)
    m_Roots.push_front(pNew);         // O(1)
    Compactar();                      // O(log(n))
}

template <class T>
void BHeaps<T>::Delete(NodoB<T> *e)
{
    Decrease_key(e, m_Min->dato - 1); // O(log(n))
    m_Min = e;                        // O(1)
    Extrac_Min();                     // O(log(n))
}

template <class T>
void BHeaps<T>::Decrease_key(NodoB<T> *&p, T val)
{
    p->m_Dato = val; // O(1)
    while (p->m_Padre && p->m_Dato < p->m_Padre->m_Dato)
    {
        swap(p->m_Dato, p->m_Padre->m_Dato);
        p = p->m_Padre;
    } // O(log(n))

    // Nota: En caso que val sea menor que el mínimo, actualizar el puntero al mínimo
}

template <class T>
NodoB<T> *BHeaps<T>::GetMin()
{
    return m_Min->m_Dato; // O(1)
}

template <class T>
void BHeaps<T>::Extrac_Min()
{
    typename std::list<NodoB<T> *>::iterator it;
    it = m_Min->m_pSons.begin();
    for (; it != m_Min->m_pSons.end(); ++it)
        m_Roots.push_front(*it); // O(log(n))

    m_Roots.remove(m_Min); // O(log(n))
    Compactar();           // O(log(n))
}

template <class T>
void BHeaps<T>::Show_Dot()
{
    std::cout << "Make your code here" << '\n';
}


#endif