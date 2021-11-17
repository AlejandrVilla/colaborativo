#ifndef NODOB_H
#define NODOB_H
#include <list>

template <class T>
class NodoB
{
public:
    std::list<NodoB<T> *> m_pSons;
    int m_Grado;
    T m_Dato;
    NodoB<T> *m_Padre;

public:
    NodoB(T) :
};

template <class T>
NodoB<T>::NodoB(T d)
{
    m_Grado = 0;
    m_Dato = d;
    m_Padre = 0;
}

#endif