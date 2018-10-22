#include "drob.h"

drob operator+(const drob&a, const drob&b) {
	drob res(a.getX(), a.getY());
	res += b;
	return res;
}

drob operator-(const drob&a, const drob&b) {
	drob res(a.getX(), a.getY());
	res -= b;
	return res;
}

drob operator*(const drob&a, const drob&b) {
	drob res(a.getX(), a.getY());
	res *= b;
	return res;
}

drob operator/(const drob&a, const drob&b) {
	drob res(a.getX(), a.getY());
	res /= b;
	return res;
}

bool operator>(const drob&a, const drob&b) {
	return a.getDrob() > b.getDrob();
}

bool operator<=(const drob&a, const drob&b) {
	return !(a.getDrob() > b.getDrob());
}

bool operator<(const drob&a, const drob&b) {
	return a.getDrob() < b.getDrob();
}

bool operator>=(const drob&a, const drob&b) {
	return !(a.getDrob() < b.getDrob());
}

bool operator==(const drob&a, const drob&b) {
	return a.getDrob() == b.getDrob();
}

bool operator!=(const drob&a, const drob&b) {
	return !(a.getDrob() == b.getDrob());
}

void main()
{
	drob a(1, 2);
	drob b(1, 4);
	a += b;
	a.print();

	drob c;
	c = a + b;
	c.print();

	bool res;
	res = a != b;
	cout << res << endl;

	system("pause");
}