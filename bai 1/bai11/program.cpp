#include <iostream>
#include <conio.h>
#include <ctime>
using namespace std;
int SinhSo();
void DoanSo( int k);
int main() {
	srand(time(NULL));
	
	int k=SinhSo();
	DoanSo( k);
	_getch();
	return 1;
}
int SinhSo() {
	int k;
	k=rand() % 100;
	return k;
}
void DoanSo(int k) {
	int so;
	int i = 1;
	while((i<=10)) {
		cout << "\nhay nhap vao so cua ban[0,100]: "; cin >> so;
		i++;
		if (so < k) {
			cout << "so can doan lon hon\n";
		}
		else if (so > k) {
			cout << "so can doan nho hon\n";
		}
		else {
			cout << "chuc mung ban da doan dung!\n";
			break;

		}
		cout << "ban con " << 10 - i << " luot doan\n";
		
	}
	if (i > 10) {
		cout << "so can doan la: " << k << "\n";
		cout << "________Thua cuoc________";
	}
}