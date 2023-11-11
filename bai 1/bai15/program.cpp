#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	double M, N, T, X,kq,Tien_no;
	int thang=0;
	cout << "nhap vao gia chiec xe: "; cin >> M;
	cout << "nhap cao so tien tra truoc: "; cin >> N;
	cout << "nhap vao so lai moi thang(%): "; cin >> T;
	cout << "nhap vao so tien tra hang thang: "; cin >> X;
	Tien_no = M - N;
	while (Tien_no > 0) {
		Tien_no = (Tien_no - X)+ (Tien_no * (T / 100));
		thang++;

	}
	cout << "sau " << thang << " thang thi chi Oanh tra het no";
	_getch();
	return 0;
}
