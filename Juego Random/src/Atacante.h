#pragma once
#include "Vivo.h"

class Atacante : public Vivo
{
protected:
	unsigned int ataque, salpicadura, num_disparos;
	float vel_ataque;
	float tiempo;

public:
	Atacante(Vector posicion);
	~Atacante(void);
	bool Atacar (Vivo** lista, Disparo** disparos);
	//Devuelve un 1 cuando dispara hacia el objetivo
	void Timer (float t);
	void Dibuja(Color equipo=0);
	void subirNivel();
	bool poderAtacar();
	bool mover(Vector destino){return false;}


	friend class Interaccion;
};
