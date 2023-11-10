#include <iostream>
#include <conio.h>
using namespace std;
bool kiemtraNT(unsigned int n);
void xuatsoNT(unsigned int n);
int tong_uoc_so_NT(unsigned int n);
int tich_thua_so_NT(unsigned int n);
int main() {
	unsigned int n;
	cout << "hay nhap so nguyen n: "; cin >> n; 'endl';
	if (kiemtraNT(n) == true) {
		cout << n << " la so nguyen to \n";
	}
	else {
		cout << n << " khong phai la so nguyen to \n";
	}
	xuatsoNT(n);
	cout << "\ntong cac so nguyen to trong [1," << n << "] va la uoc cua " << n << " la: " << tong_uoc_so_NT(n);
	tich_thua_so_NT(n);
	_getch();
	return 0;
}
bool kiemtraNT(unsigned int n) {
	int s = 1;
	if (n < 2) {
		s = 0;
	}
	else if (n == 2) {
		s = 1;
	}
	else {
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				s = 0;
			}

		}
	}return s;
}
void xuatsoNT(unsigned int n) {
	int s = 0;
	cout << "\ncac so nguyen to trong [1," << n << "] la: \n";
	for (int i = 0; i <= n; i++) {
		if (kiemtraNT(i) == true) {
			s++;
			cout  << i << "\t";
			if (s % 5 == 0) {
				cout<<"\n";
			}
		}
	}
	cout << "\nso luong so nguyen to trong [1,"<<n<<"] la: " << s;
}
int tong_uoc_so_NT(unsigned int n) {
	int s = 0;
	for (int i = 1; i <= n; i++) {
		if ((kiemtraNT(i) == true)) {
			if (n % i == 0) {
				s = s + i;
			}
		}
	}return s;
}
int tich_thua_so_NT(unsigned int n) {
	if (kiemtraNT(n) == false) {
		cout<<"\n" << n << " = ";
		while (n > 0) {
			for(int i=2;i<=n;i++)
				if ((n % i == 0) && (kiemtraNT(i) == true)) {
					cout << i << ".";
					n /= i;
					break;
				}
	}
	}
	return 0;
}