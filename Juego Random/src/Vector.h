#pragma once
#include <cmath>

class Vector
{
public:
	float x, y, z;
	Vector(float x=0, float y=0, float z=0);
	virtual ~Vector(void);
	float modulo();
	float argumento();	// argumento del vector
	void setValor(float x, float y);
	void setValor(float x, float y, float z);
	Vector operator - (Vector &);
	Vector operator + (Vector &);
	Vector operator * (float);
	Vector operator / (float);
	float operator * (Vector &);
	bool operator == (Vector &);
	bool operator == (float);
	bool operator != (Vector &);
	bool operator != (float);
	bool operator < (float numero);
	bool operator > (float numero);
	bool operator < (Vector v);
	bool operator > (Vector v);
	Vector unitario();
	Vector perpendicular();
};
