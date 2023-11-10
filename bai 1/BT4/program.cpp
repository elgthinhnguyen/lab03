#include <iostream>
#include <conio.h>
using namespace std;

double TinhChiSo_BMI(double n, double c);
int main() {
	double n, c;
	cout << "hay nhap chieu cao (m): "; cin >> c;
	cout << "\nhay nhap can nang (kg): "; cin >> n; 'endl';
	if (TinhChiSo_BMI(n, c) < 15) {
		cout << "DOI KHAT";
	}
	else if (TinhChiSo_BMI(n, c ) < 17.5) {
		cout << "BIENG AN";
	}
	else if (TinhChiSo_BMI(n, c) < 25) {
		cout << "LY TUONG";
	}
	else if (TinhChiSo_BMI(n, c) < 30) {
		cout << "THUA CAN";
	}
	else if (TinhChiSo_BMI(n, c) < 40) {
		cout << "BEO PHI";
	}
	else {
		cout << "TRE EM NI BEO PHI";
	}
	_getch();
	return 0;
}
	double TinhChiSo_BMI(double n, double c) {
		double bmi = n / (c * c);
		return bmi;
}