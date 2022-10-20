#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	setlocale(LC_ALL, "Russian");
	switch (a) {
	case 1:
		cout << "налево"; break;
	case 2:
		cout << "вверх"; break;
	case 3:
		cout << "вправо"; break;
	case 4:
		cout << "вниз"; break;
	}
}
