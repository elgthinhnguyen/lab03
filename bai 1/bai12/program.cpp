#include <iostream>
#include <conio.h>
using namespace std;
double tinh_tien(double N, double L, int T);
int main() {
	double N, L;
	int T;
	cout << "hay nhap so tien(ngin dong): "; cin >> N;
	cout << "hay nhap so thang: "; cin >> T;
	cout << "hay nhap so lai hang thang(%): "; cin >> L;
	cout << "so tien anh Binh co sau " << T << " thang la: " << tinh_tien(N, L, T);
	_getch();
	return 0;
}
double tinh_tien(double N,double L,int T) {
	L /= 100;
	double kq=N;
	for (int i = 1; i <= T; i++) {
		kq += kq * L;
	}return kq;
}