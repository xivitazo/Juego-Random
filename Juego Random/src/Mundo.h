#pragma once
#include "Equipo.h"
#include "Mapa.h"
#include "Mobjeto.h"

class Mundo
{
	Mapa map;
	Equipo jugador1, jugador2;
	Lista <Mobjeto> disparos;

public: 
	Mundo();
	~Mundo();
	void Tecla(unsigned char key);
	void Inicializa();
	void Timer(float t);
	void Dibuja();
	void Raton (int button, int state, Vector pos);
	void RatonPasivo(int x, int y);
	void atacar ();
	void morir();

	
	
	friend class Mapa;
	friend class Coordinador;
	friend class Menus;
};
