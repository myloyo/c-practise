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
		cout << "��� �����";
	}
	else if (d == 0) {
		cout << "���� ������";
	}
	else if (d < 0) {
		cout << "������ ���";
	}
	return 0;
}