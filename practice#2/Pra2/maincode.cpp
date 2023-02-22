#include <iostream>
#include "circle.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	circle A(0, 0, 0);
	circle B(0, 0, 0);
	circle C(0, 0, 0);

	float j1, j2, j3;

	cout << "x, y � ������ ���������� A\n";
	cin >> j1 >> j2 >> j3;
	A.set_circle(j1, j2, j3);

	cout << "x, y � ������ ���������� B\n";
	cin >> j1 >> j2 >> j3;
	B.set_circle(j1, j2, j3);

	cout << "x, y � ������ ���������� C\n";
	cin >> j1 >> j2 >> j3;
	C.set_circle(j1, j2, j3);

	cout << "\n";

	cout << "������� ���������� A - " << A.square() << "\n";
	cout << "������� ���������� B - " << B.square() << "\n";
	cout << "������� ���������� C - " << C.square() << "\n";

	float R, X, Y;

	A.get_circle(R, X, Y);
	if (B.check_circle(R, X, Y)) cout << "���������� A � B ������������\n";
	else cout << "���������� A � B �� ������������\n";

	B.get_circle(R, X, Y);
	if (C.check_circle(R, X, Y)) cout << "���������� B � C ������������\n";
	else cout << "���������� B � C �� ������������\n";

	C.get_circle(R, X, Y);
	if (A.check_circle(R, X, Y)) cout << "���������� A � C ������������\n";
	else cout << "���������� A � C �� ������������\n";

	float a, b, c;

	cout << "������� ����������� (a,b,c)\n";
	cin >> a >> b >> c;

	if (A.triangle_around(a, b, c)) cout << "���������� A ����� ������� �����������\n";
	else cout << "���������� A ������ ������� �����������\n";

	if (B.triangle_around(a, b, c)) cout << "���������� B ����� ������� �����������\n";
	else cout << "���������� B ������ ������� �����������\n";

	if (C.triangle_around(a, b, c)) cout << "���������� C ����� ������� �����������\n";
	else cout << "���������� C ������ ������� �����������\n";

	if (A.triangle_in(a, b, c)) cout << "� ���������� A ����� ������� �����������\n";
	else cout << "� ���������� A ������ ������� �����������\n";

	if (B.triangle_in(a, b, c)) cout << "� ���������� B ����� ������� �����������\n";
	else cout << "� ���������� B ������ ������� �����������\n";

	if (C.triangle_in(a, b, c)) cout << "� ���������� C ����� ������� �����������\n";
	else cout << "� ���������� C ������ ������� �����������\n";

	return 0;
}