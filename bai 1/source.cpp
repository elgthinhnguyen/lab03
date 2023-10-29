#include <iostream>
#include <conio.h>
using namespace std;
void GiaiPTBacNhat(double a, double b);
int main() {
	int a, b;
	cout << "hay nhap a: "; cin >> a; cout << '\n';
	cout << "hay nhap b: "; cin >> b; cout << '\n';
	GiaiPTBacNhat(a, b);
	_getch();
	return 0;
}
void GiaiPTBacNhat(double a, double b) {
	int x;
	if ((a == b) && (a == 0)) {
		cout << "phuong trinh vo so nghiem\n";
	}
	else if (a == 0) {
		cout << "phuong trinh vo nghiem\n";
	}
	else {
		x = -(b) / a;
		cout << "nghiem cua phuong trinh la: " << x;
	}
}