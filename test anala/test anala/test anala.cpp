#include <iostream>
#include <cmath>

using namespace std;

double dis(double a, double b, double c);

int main(){
    setlocale(LC_ALL, "Russian");
    cout << "覧覧覧覧覧覧覧覧覧覧覧覧�" << endl << endl;
    cout << "1. ﾌ褪�� 蒻���韲竟瑙��." << endl << "2. ﾒ褓�褌� ﾂ韃��." << endl << "3. ﾇ珞褞�頸� �珮���." << endl << endl;
    cout << "ﾐ褂韲: ";
    int temp = 0;
    while (temp != 3) {
        cin >> temp;
        if (temp == 1) {
            double a, b, c, xa, xb, disb;
            cout << "\nﾂ粢蒻�� ����韃�韃�� �: ";
            cin >> a;
            cout << "ﾂ粢蒻�� ����韃�韃�� b: ";
            cin >> b;
            cout << "ﾂ粢蒻�� �����頽韃�� �: ";
            cin >> c;
            if (a != 0 && b!=0 && c!=0) {
                cout << "ﾊﾎﾍﾅﾗﾍﾛﾉ ﾂﾈﾄ: " << a << "x^2" << "+(" << b << ")" << "x" << "+(" << c << ")" << "=0" << endl;
                double ld;
                ld = dis(a, b, c);
                if (ld < 0)
                {
                    cout << "ﾐ褸褊�� �褪." << endl;
                    cout << "覧覧覧覧覧覧覧覧覧覧覧覧�" << endl << endl;
                    cout << "1. ﾌ褪�� 蒻���韲竟瑙��." << endl << "2. ﾒ褓�褌� ﾂ韃��." << endl << "3. ﾇ珞褞�頸� �珮���." << endl << endl;
                    cout << "ﾐ褂韲: ";
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
                    cout << "覧覧覧覧覧覧覧覧覧覧覧覧�" << endl << endl;
                    cout << "1. ﾌ褪�� 蒻���韲竟瑙��." << endl << "2. ﾒ褓�褌� ﾂ韃��." << endl << "3. ﾇ珞褞�頸� �珮���." << endl << endl;
                    cout << "ﾐ褂韲: ";
                }
            }
            else {
                cout << "覧覧覧覧覧覧覧覧覧覧覧覧�" << endl << endl;
                cout << "ﾌ褊� ���� �� �瑪�齏� �瑕." << endl << endl;
                cout << "覧覧覧覧覧覧覧覧覧覧覧覧�" << endl << endl;
                cout << "1. ﾌ褪�� 蒻���韲竟瑙��." << endl << "2. ﾒ褓�褌� ﾂ韃��." << endl << "3. ﾇ珞褞�頸� �珮���." << endl << endl;
                cout << "ﾐ褂韲: ";
            }
        }
        if (temp == 2) {
                double a, b, c, x1, x2;
                int fl=0;
                cout << "\nﾂ粢蒻�� �����頽韃�� a: ";
                cin >> a; 
                cout << "ﾂ粢蒻�� �����頽韃�� b: ";
                cin >> b;
                cout << "ﾂ粢蒻�� �����頽韃�� c: ";
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
                if (fl != 1) printf("\nﾟ 鈞��襌�� 籵� ��頸瑣�.\n\n");
                cout << "覧覧覧覧覧覧覧覧覧覧覧覧�" << endl << endl;
                cout << "1. ﾌ褪�� 蒻���韲竟瑙��." << endl << "2. ﾒ褓�褌� ﾂ韃��." << endl << "3. ﾇ珞褞�頸� �珮���." << endl << endl;
                cout << "ﾐ褂韲: ";
        }
    }
}
double dis(double a, double b, double c) {
    double sup;
    sup = ((b * b) - (4 * a * c));
    cout << "ﾄ頌��韲竟瑙� �珞褊: " << sup << endl;
    return sup;
}