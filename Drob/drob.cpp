#include "drob.h"



drob::drob()
{
	this->x = 0;
	this->y = 1;
}


drob::~drob()
{
}

drob::drob(int a, int b)
{
	setX(a);
	setY(b);
}

drob::drob(int a)
{
	this->x = a;
	this->y = 1;
}

void drob::setX(int a)
{
	this->x = a;
}

void drob::setY(int a)
{
	if (a != 0) this->y = a;
	else this->y = a;
}

int drob::getX() const
{
	return x;
}

int drob::getY() const
{
	return y;
}

void drob::print() const
{
	cout << (double)x / y << endl;
}

double drob::getDrob() const
{
	return (double)x / y;
}

drob drob::operator+=(const drob & obj)
{
	this->x = obj.y*this->x + obj.x*this->y;
	this->y *= obj.y;
	return *this;
}

drob drob::operator-=(const drob & obj)
{
	this->x = obj.y*this->x - obj.x*this->y;
	this->y *= obj.y;
	return *this;
}

drob drob::operator*=(const drob & obj)
{
	this->x *= obj.x;
	this->y *= obj.y;
	return *this;
}

drob drob::operator/=(const drob & obj)
{
	this->x *= obj.y;
	this->y *= obj.x;
	return *this;
}

drob operator+(const drob & a, const drob & b)
{
	drob res(a.getX(), a.getY());
	res += b;
	return res;	
}

drob operator-(const drob & a, const drob & b)
{
	drob res(a.getX(), a.getY());
	res -= b;
	return res;
}

drob operator*(const drob & a, const drob & b)
{
	drob res(a.getX(), a.getY());
	res *= b;
	return res;
}

drob operator/(const drob & a, const drob & b)
{
	drob res(a.getX(), a.getY());
	res /= b;
	return res;
}

bool operator>(const drob & a, const drob & b)
{
	return a.getDrob() > b.getDrob();
}

bool operator<=(const drob & a, const drob & b)
{
	return !(a.getDrob() > b.getDrob());
}

bool operator<(const drob & a, const drob & b)
{
	return a.getDrob() < b.getDrob();
}

bool operator>=(const drob & a, const drob & b)
{
	return !(a.getDrob() < b.getDrob());
}

bool operator==(const drob & a, const drob & b)
{
	return a.getDrob() == b.getDrob();
}

bool operator!=(const drob & a, const drob & b)
{
	return !(a.getDrob() == b.getDrob());
}
