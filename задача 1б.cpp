#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "������" << endl; break;
	case 2:
		cout << "�����" << endl; break;
	case 3:
		cout << "������"<< endl; break;
	case 4:
		cout << "����" << endl; break;
	}
	if (a == 1 || a == 3) {
		cout << "�������������� ��������";
	}
	else {
		cout << "������������ ��������";
	}
	return 0;
}