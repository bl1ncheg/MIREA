#include <iostream>
#include <cmath>

using namespace std;

double dis(double a, double b, double c);

int main(){
    setlocale(LC_ALL, "Russian");
    cout << "�������������������������" << endl << endl;
    cout << "1. ����� �������������." << endl << "2. ������� �����." << endl << "3. ��������� ������." << endl << endl;
    cout << "�����: ";
    int temp = 0;
    while (temp != 3) {
        cin >> temp;
        if (temp == 1) {
            double a, b, c, xa, xb, disb;
            cout << "\n������� ����������� �: ";
            cin >> a;
            cout << "������� ����������� b: ";
            cin >> b;
            cout << "������� ����������� �: ";
            cin >> c;
            if (a != 0 && b!=0 && c!=0) {
                cout << "�������� ���: " << a << "x^2" << "+(" << b << ")" << "x" << "+(" << c << ")" << "=0" << endl;
                double ld;
                ld = dis(a, b, c);
                if (ld < 0)
                {
                    cout << "������� ���." << endl;
                    cout << "�������������������������" << endl << endl;
                    cout << "1. ����� �������������." << endl << "2. ������� �����." << endl << "3. ��������� ������." << endl << endl;
                    cout << "�����: ";
                }
                else
                {
                    disb = sqrt(ld);
                    xa = ((-b) + disb) / (2 * a);
                    xb = ((-b) - disb) / (2 * a);
                    if (xa = xb) {
                        printf("X= %lf\n", xa);
                    }
                    else {
                        printf("X1, X2 = %lf %lf\n x=", xa, xb);
                    }
                    cout << "�������������������������" << endl << endl;
                    cout << "1. ����� �������������." << endl << "2. ������� �����." << endl << "3. ��������� ������." << endl << endl;
                    cout << "�����: ";
                }
            }
            else {
                cout << "�������������������������" << endl << endl;
                cout << "���� ���� �� ������� ���." << endl << endl;
                cout << "�������������������������" << endl << endl;
                cout << "1. ����� �������������." << endl << "2. ������� �����." << endl << "3. ��������� ������." << endl << endl;
                cout << "�����: ";
            }
        }
        if (temp == 2) {
                double a, b, c, x1, x2;
                int fl=0;
                cout << "\n������� ����������� a: ";
                cin >> a; 
                cout << "������� ����������� b: ";
                cin >> b;
                cout << "������� ����������� c: ";
                cin >> c;
                for (x1 = -20; x1 <= 20; x1 += 0.01)
                {
                    for (x2 = -20; x2 <= 20; x2 += 0.01)
                        if (fabs(x1 + x2 + b / a) <= 0.01 && fabs(x1 * x2 - c / a) <= 0.01)
                        {
                            if (x1 == x2) printf("X= %lf\n", x1);
                            else printf("X1, X2 = %lf %lf\n", x1, x2);
                            fl++;
                        
                        }
                    if (fl == 1) {
                        break;
                    };
                }
                if (fl != 1) printf("\n� �������� ��� �������.\n\n");
                cout << "�������������������������" << endl << endl;
                cout << "1. ����� �������������." << endl << "2. ������� �����." << endl << "3. ��������� ������." << endl << endl;
                cout << "�����: ";
        }
    }
}
double dis(double a, double b, double c) {
    double sup;
    sup = ((b * b) - (4 * a * c));
    cout << "������������ �����: " << sup << endl;
    return sup;
}