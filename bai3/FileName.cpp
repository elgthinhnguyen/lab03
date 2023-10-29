//doi co so:
#include <iostream>
#include <conio.h>
using namespace std;
const char x[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
void Xuat(int so);
void DoiCoSo(unsigned int n, unsigned int b);
unsigned int TimLuyThua(unsigned int b, unsigned int n);
int main() {
	unsigned int n;
	unsigned int b;
	cout << "hay nhap so tu nhien n : "; cin >> n;
	cout << "hay nhap he co so b : "; cin >> b;
	cout << n << '(' << 10 << ')' << '=';
	DoiCoSo(n, b); cout << '(' << b << ')';
	_getch();
	return 0;
}
void Xuat(int so) {
	cout << x[so];
}
unsigned int TimLuyThua(unsigned int b, unsigned int n) {
	int x = 1;
	while (x < n) {
			x *= b;
	}
	return x/b;
}
void DoiCoSo(unsigned int n, unsigned int b) {
	int v = TimLuyThua(b, n);
	while (v > 0) {
		if (n < v) {
			Xuat(0);
		}
		else {
			Xuat(n / v);
			n = n - ((n / v) * v);
		}
		v = v / b;
	} 
	
	
	

}
