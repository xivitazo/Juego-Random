#include "Lista.h"

template <class S>
Lista<S>::Lista(void):
numero(0)
{
	for (int n=0;n<MAX;n++)
		lista[n]=0;
}

template <class S>
Lista<S>::~Lista(void)
{
}

template <class S>
void Lista<S>::Timer(float t)
{
	for(int n=0; n<numero;n++)
		lista[n]->Timer(t);
}

template <class S>
void Lista<S>::Dibuja()
{
	for(int n=0; n<numero;n++)
		lista[n]->Dibuja();
}

template <class S>
bool Lista<S> :: operator += (S *a)
{
	if(numero<MAX)
	{
		lista[numero++]=a;
		return true; 
	}
	return false;
}

template <class S>
S* Lista<S> :: getClass(int num)
{
	return lista[num];
}

template <class S>
S** Lista<S> :: getList()
{
	return lista;
}
