#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c, d, x;
	cin >> a >> b >> c;
	setlocale(LC_ALL, "Russian");
	d = pow(b, 2) - 4 * a * c;
	if (d > 0) {
		cout << "два корня";
	}
	else if (d == 0) {
		cout << "один корень";
	}
	else if (d < 0) {
		cout << "нет корней";
	}
	return 0;
}
