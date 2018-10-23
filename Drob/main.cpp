#include "drob.h"


void main()
{
	drob a(1, 2);
	drob b(1, 4);
	a += b;
	a.print();

	drob c;
	c = a + b;
	c.print();
	a.print();

	bool res;
	res = a != b;
	cout << res << endl;

	system("pause");
}