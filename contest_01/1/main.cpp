#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double pi;
	pi = sqrt(12) * (1 - (1 / (3.0 * 3)) + (1 / (5.0 * pow(3, 2))) - (1 / (7.0 * pow(3, 3))) + (1 / (9.0 * pow(3, 4))) - (1 / (11.0 * pow(3, 5))));
	cout << pi << endl;
	return 0;
}



