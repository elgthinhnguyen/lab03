#include <iostream>
#include <conio.h>
#include <math.h>
#define SAISO pow(10,-15)
using namespace std;
double canbachai(unsigned int n);
int main() {
	unsigned int n;
	cout << "hay nhap vao so n: "; cin >> n;
	cout<<"can bac hai cua "<<n<<" la: "<<canbachai(n);
	_getch();
	return 0;
}
double canbachai(unsigned int n) {
	double kq;
	kq = (double)n / 2;
	while ((kq * kq - n) / n >= SAISO) {
		kq = (kq + n / kq) / 2;
	}
	return kq;
}