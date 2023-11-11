#include <iostream>
#include <conio.h>
#define SAISO 0.000001
using namespace std;

int xuatgiatri(unsigned int n);
int dem(unsigned int n);
double canbachai(unsigned int n);
double timluythua(unsigned int n);
int main() {
	unsigned int n = 0;
	cout << "hay nhap vao n: ";
	cin >> n;
	xuatgiatri(n);
	cout<<"\nso luong cac uoc so cua n la: "<< dem(n);
	cout<<"\ncan bac hai cua so "<< n<< " xap xi: "<<canbachai(n);
	cout << "\nso nho hon hoac bang " << n << " ma la luy thua cua 2 la: " << timluythua(n);
	_getch();
	return 0;
}
int xuatgiatri(unsigned int n) {
	int s = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			cout << i << ' ';
		}
	}
	return 0;
}
int dem(unsigned int n) {
	int s = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			s++;
		}
	}
	return s;
}
double canbachai(unsigned int n) {
	double kq;
	kq = (double)n / 2;
	while ((kq * kq - n) / n >= SAISO) {
		kq = (kq + n / kq) / 2;
	}
	return kq;
}
double timluythua(unsigned int n) {
	int kq=1;
	while (kq < n) {
		kq *= 2;
	}
	return kq / 2;
}
