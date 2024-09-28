#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c, g, h;
	cin >> a >> b >> c;

	g = abs(a - b); // расстояние от А до B
	h = abs(a - c); // расстояние от A до C

	if (g < h)
	{
		cout << "B " << g << endl;
	}
	else
	{
		cout << "C " << h << endl;
	}
}
