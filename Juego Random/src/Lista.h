#pragma once
#pragma once
#define MAX 500
template <class S> 
class Lista
{
	S* lista[MAX];
	int numero;
public:
	void Timer(float t);
	void Dibuja();
	/*void Function (*/
	Lista(void);
	~Lista(void);
	//Devuelve un puntero a una variable de la lista en la posicion que se le pasa
	S* getClass(int num);
	//Devuelve un puntero a la lista
	S** getList();
	bool operator+=(S *a);
	bool eliminar(int numero);
};

