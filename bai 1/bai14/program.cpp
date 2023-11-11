#include <iostream>
#include <conio.h>
using namespace std;
double tinhgio(double M, double N, double S, double T);
int doi_gio(double M, double N, double S, double T);
int main() {
	double M, N, S, T;
	cout << "nhap khoang cach tu A->B(km): "; cin >> M;
	cout << "nhap vao toc do cua tau(km/h): "; cin >> N;
	cout << "nhap so ga tau se dung lai: "; cin >> T;
	cout << "nhap so thoi gian nghi o moi ga(phut): "; cin >> S;
	tinhgio(M, N, S, T);

	cout << "tau se den diem B vao "; doi_gio(M, N, S, T);

}
double tinhgio(double M, double N, double S, double T) {
	int so_phut;
	so_phut = (M / N)*60 + (S * T);
	return so_phut;
}
int doi_gio(double M, double N, double S, double T) {
	int so_gio = 7+ (tinhgio(M, N, S, T)/60);
	int so_phut = 0 + ((int)tinhgio(M, N, S, T)%60);
	cout << so_gio << "h" << so_phut<<"p";
	return 0;
	
}