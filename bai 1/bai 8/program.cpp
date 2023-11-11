#include <iostream>
#include <conio.h>
using namespace std;
double factorial(unsigned int x);
double pow(int x, int n);
double Hn(unsigned int n);
double Sn(unsigned int n);
double Tn(unsigned int n);
double Un(unsigned int n);
double Fn(unsigned int n);
int main() {
	unsigned int n;
	cout << "hay nhap vao so n: "; cin >> n;
	cout << "\nHn = " << Hn(n);
	cout << "\nSn = " << Sn(n);
	cout << "\nTn = " << Tn(n);
	cout << "\nUn = " << Un(n);
	cout << "\nFn = " << Fn(n);
	_getch();
	return 0;
}
//hàm tính số mũ và hàm tính giai thừa: 
double factorial(unsigned int x) {
	double kq=1;
	for (int i = 1; i <= x; i++) {
		kq *= i;
	}return kq;
}
double pow(int x,int n) {
	int temp = x;
	for (int i = 1; i < n; i++) {
		x *= temp;
	}return x;
}
//các hàm tính câu a->e:
double Hn(unsigned int n) {
	double kq = 0;
	for (int i = 1; i <= n; i++) {
		kq += (double)1 / i;
	}
	return kq;
}
double Sn(unsigned int n) {
	double kq = 0;
	int i = 1;
	while (i <=n) {
		kq += (i + 1) / ((double)i * i);
		i++;
	}return kq;

}
double Tn(unsigned int n) {
	double kq = 0;
	int i=1;
	do {
		kq += (pow(-1, i) * i) / (i + (double)1);
		i++;
	} while (i <= n);
	return kq;

}
double Un(unsigned int n) {
	double kq = 0;
	for (int i = 1; i <= n; i++) {
		kq += (double)1 / (i * (i + 1));
	}return kq;

}
double Fn(unsigned int n) {
	double kq = 0;
	for (int i = 1; i <= n; i++) {
		kq += factorial(i);
	}return kq;
}