#include <iostream>
#include <conio.h>
using namespace std;
double TinhBieuThuc(double x, double y, char k);
int main() {
	double x, y;
	char k;
	cout << "hay nhap x: "; cin >> x; cout << '\n';
	cout << "hay nhap y: "; cin >> y; cout << '\n';
	cout << "hay nhap phep tinh: "; cin >> k; cout << '\n';
	cout<<"bieu thuc "<< x<< k<<y <<'='<<TinhBieuThuc(x, y, k);
	_getch();
	return 0;
}
double TinhBieuThuc(double x, double y, char k) {
	switch (k) {
	case '+':
		return x + y;
	case '-':
		return x - y;
	case '*':
		return x * y;
	case '/':
		return x / y;
		break;
	}
}