#include "vector.h"


Vector::Vector(float x, float y, float z):x(x), y(y), z(z)
{
}

Vector::~Vector(void)
{
}

Vector Vector :: operator - (Vector &v)
{
	Vector aux;
	aux.x =x - v.x;
	aux.y =y - v.y;
	aux.z =z - v.z;
	return aux;
}

Vector Vector:: operator + (Vector &v)
{
	Vector aux;
	aux.x =x + v.x;
	aux.y =y + v.y;
	aux.z =z+ v.z;
	return aux;
}

float Vector:: operator * (Vector &v)
{
	return x*v.x+y*v.y+z*v.z;
}

Vector Vector :: operator * (float n)
{
	Vector aux;
	aux.x =x *n;
	aux.y =y *n;
	aux.z=z*n;
	return aux;
}

Vector Vector :: operator / (float n)
{
	Vector aux;
	aux.x =x /n;
	aux.y =y /n;
	aux.z=z/n;
	return aux;
}

float Vector::modulo()
{
	return (float)sqrt(x*x+y*y+z*z);
}

float Vector::argumento()
{
	return (float)atan(y/x);
}

Vector Vector:: unitario ()
{
	Vector u (x,y,z);
	return u/modulo();

}

void Vector :: setValor(float x, float y, float z)
{
	this -> x=x;
	this -> y=y;
	this-> z=z;
}

void Vector :: setValor(float x, float y)
{
	this -> x=x;
	this -> y=y;
}

Vector Vector :: perpendicular()
{
	Vector aux;
	aux.x = y;
	aux.y= -x;
	return aux;
}

bool Vector :: operator == (Vector &v)
{
	if((*this-v).modulo()<0.1f)
		return true;
	return false;
}

bool Vector :: operator == (float x)
{
	if(abs(modulo()-x)<=0.1f)
		return true;
	return false;
}

bool Vector :: operator != (Vector &v)
{
	if((*this-v).modulo()<0.1f)
		return false;
	return true;
}

bool Vector :: operator < (float numero)
{
	return modulo()<numero;
}

bool Vector :: operator > (float numero)
{
	return modulo()>numero;
}

bool Vector :: operator != (float n)
{
	if(abs(modulo()-n)<=0.1f)
		return false;
	return true;
}