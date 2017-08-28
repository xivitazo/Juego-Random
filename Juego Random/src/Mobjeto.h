#pragma once
#include "Objeto.h"


//ESTA CLASE TENDRA QUE SER DIVIDIDA YA QUE AUN ES LA CLASE DISPARO
//HAY QUE SEPARAR LA PARTE DEL ATAQUE DE LA DEL MOVIMIENTO


class Mobjeto : public Objeto
{
protected:
	float radio;
	unsigned int daño;
	Vector destino;
	Vector velocidad;
	float velocidad_z, z, z0;
	int velocidad_max, salpicadura;
	//vector aceleracion; lo omitimos por ahora
	float tiempo;
public:
	Mobjeto(Vector posicion, Vector destino,unsigned int daño, unsigned int salpicadura);
	//Introduces la posicion del disparo, aquien disparar, el daño y la salpicadura
	virtual ~Mobjeto(void);

	void Dibuja(void);
	bool Mueve(void); //devuelve un 1 en el momento que llega al destino
	bool Timer_disparo (float t);
	bool setVelocidad(Vector velocidad){return true;}
	int getSalpicadura(){return salpicadura;}
	bool explosion();

	//amigo de la clase interacción para que interaccion
	//pueda usar las cosas de disparo
	friend class Interaccion;
};