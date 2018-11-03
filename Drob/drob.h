#pragma once
#include <iostream>
using namespace std;
class drob
{
	int x, y;
public:
	drob();
	~drob();
	drob(int a, int b);
	drob(int a);
	void setX(int a);
	void setY(int a);
	int getX() const;
	int getY() const;
	//void print() const;
	double getDrob() const;
	drob operator+=(const drob &obj);
	drob operator-=(const drob &obj);
	drob operator*=(const drob &obj);
	drob operator/=(const drob &obj);
	drob operator++();
	drob operator--();
	drob operator++(int);
	drob operator--(int);	
};

drob operator+(const drob&a, const drob&b);
drob operator-(const drob&a, const drob&b);
drob operator*(const drob&a, const drob&b);
drob operator/(const drob&a, const drob&b);
bool operator>(const drob&a, const drob&b);
bool operator<=(const drob&a, const drob&b);
bool operator<(const drob&a, const drob&b);
bool operator>=(const drob&a, const drob&b);
bool operator==(const drob&a, const drob&b);
bool operator!=(const drob&a, const drob&b);
drob operator^(const drob&obj, int p);

ostream&operator<<(ostream&os, const drob&obj);
istream&operator>>(istream&is, drob&obj);