#include <iostream>
#include <conio.h>
using namespace std;
int xuatuoc_chung(unsigned int m, unsigned int n);
int TimUCLN(int m, int n);
int TimBCNN(int n, int m);
int main() {
	unsigned int m, n;
	cout << "nhap so nguyen m: "; cin >> m;
	cout << "nhap so nguyen n: "; cin >> n;
	xuatuoc_chung(m, n);
	cout<<"\nUCLN cua "<<m<<" va "<<n<<" la: "<<TimUCLN(m, n);
	cout << "\nBCNN cua " << m << " va " << n << " la: " << TimBCNN(n, m);
	_getch();
	return 0;

}

int xuatuoc_chung(unsigned int m, unsigned int n) {
	if (m < n) {
		cout << "cac uoc chung cua " << m<< " va " << n << " la: ";
			for (int i = 1; i <= m; i++)
				if ((m % i == 0) && (n % i == 0)) {
					cout << i << "\t";
				}
	}
	else if (m > n) {
		cout << "cac uoc chung cua " << m<< " va " << n << " la: ";
			for (int i = 1; i <= n; i++)
				if ((m % i == 0) && (n % i == 0)) {
					cout << i << "\t";
				}
	}
	return 0;
}
int TimUCLN(int m, int n) {
	while (m != n) {
		if (m > n) {
			m = m - n;
		}
		else {
			n = n - m;
		}
	}
	return m;
}
int TimBCNN(int n, int m) {
	return m * n / TimUCLN(m, n);
}