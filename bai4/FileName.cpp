//so nguyen
#include <iostream>
#include <conio.h>
#define MAX 100000
using namespace std;
int aray[MAX];
int dem(int* aray,unsigned int n);
void xuatmang(int *aray, unsigned int n);
void autoFill(int *aray,unsigned int n);
int main() {
	unsigned int n;
	cout << "hay nhap so nguyen n: "; cin >> n;
	autoFill(aray, n);
	xuatmang(aray, n);
	cout << "\nso luong cac so chia het cho 3 nhung khong chia het cho 4 trong doan [1, " << n << "] la: " << dem(aray, n);
	_getch();
}
	void autoFill(int* aray, unsigned int n) {
		for (int i = 0; i < n; i++) {
			aray[i] = i+1;
		}
	}
	void xuatmang(int* aray, unsigned int n) {
	for (int i = 0; i < n; i++) {
		if (i % 10 == 0) {
			cout << '\n';
		}
		cout << aray[i] << '\t';
	}
}
	int dem(int* aray, unsigned int n) {
	int dem = 0;
	for (int i = 0; i <= n; i++) {
		if ((aray[i] % 3 == 0) && (aray[i] % 4 != 0)) {
			dem += 1;
		}
	}
	return dem;
}

