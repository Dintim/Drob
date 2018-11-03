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
	else this->y = 1;
}

int drob::getX() const
{
	return x;
}

int drob::getY() const
{
	return y;
}

//void drob::print() const
//{
//	cout << (double)x / y << endl;
//}

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

drob drob::operator++()
{
	this->x += this->y;
	return *this;
}

drob drob::operator--()
{
	this->x -= this->y;
	return *this;
}

drob drob::operator++(int)
{
	drob tmp = *this;
	++*this;
	return tmp;
}

drob drob::operator--(int)
{
	drob tmp = *this;
	--*this;
	return tmp;
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

drob operator^(const drob & obj, int p)
{
	drob tmp;
	int a = obj.getX(), b = obj.getY();
	if (p > 0) {
		while (p > 1) {
			a *= obj.getX();
			b *= obj.getY();
			p--;
		}
		tmp.setX(a);
		tmp.setY(b);
	}
	else if (p < 0) {
		while (p < -1) {
			a *= obj.getX();
			b *= obj.getY();
			p++;
		}
		tmp.setX(b);
		tmp.setY(a);
	}
	else
		return 1;
	
	return tmp;
}

ostream & operator<<(ostream & os, const drob & obj)
{	
	os << obj.getDrob();
	return os;
}

istream & operator>>(istream & is, drob & obj)
{
	int num;
	is >> num;
	obj.setX(num);
	is >> num;
	obj.setY(num);
	return is;
}
