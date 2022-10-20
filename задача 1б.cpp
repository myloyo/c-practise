#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	setlocale(LC_ALL, "Russian");
	switch (a) {
	case 1:
		cout << "налево" << endl; break;
	case 2:
		cout << "вверх" << endl; break;
	case 3:
		cout << "вправо"<< endl; break;
	case 4:
		cout << "вниз" << endl; break;
	}
	if (a == 1 || a == 3) {
		cout << "горизонтальное движение";
	}
	else {
		cout << "вертикальное движение";
	}
	return 0;
}
