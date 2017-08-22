#pragma once
#include "Atacante.h"
#include "Mobjeto.h"

class Matacante : public Atacante, public Mobjeto
{
protected:

	//ESTA PARTE DEBERÍA ESTAR EN Mobjeto.h

/*	Vector velocidad;
	Vector aceleracion;	//introduzco aceleración de los personajes
	float velocidad_max;
	Vector destino;*/



	void setStats ( unsigned int vida,unsigned int ataque, float vel_ataque, float salpicadura, float velocidad);
	int rango_visibilidad;
	Vector memoria;
	bool huyendo;

public:
	Matacante(Luchadores tipo, unsigned int nivel, Vector posicion, Vector destino);
	/*Lista de tipos:
		0-Prueba, todo 1 (subidas de nivel del 10%
		1-.........*/
	//Personaje(){} //constructor de oficio
	//Personaje (int x, int y, int z);
	virtual ~Matacante(void);
	bool meMuevo ();
	//devuele un 1 cuando llega a la posicion
	bool Atacar (Vivo** lista, Disparo** disparos);
	//Ataca, o se mueve hasta donde pueda atacar para golpear al objetivo
	//Devuelve un 1 cuando crea un disparo hacia el objetivo
	void Dibuja(Color equipo=0);
	void Timer (float t);
	void subirNivel();
	bool setVelocidad (Vector velocidad);
	//EN Mobjeto.h
	/*
	bool mover(Vector destino);
	Vector getVelocidad();
	*/
	bool huir ();

	friend class Interaccion;
	friend class Lista_de;
};