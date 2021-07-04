#include "PhuongBac2.h"

PTB2::PTB2()
{
	a = b = c = 0;
}

PTB2::~PTB2()
{
}

void PTB2::Nhap()
{
	cout << "\nNhap A: ";
	cin >> a;
	cout << "\nNhap B: ";
	cin >> b;
	cout << "\nNhap C: ";
	cin >> c;
}

void PTB2::GiaivaXuat()
{
	if (a == 0) {
		if (b == 0) {
			cout << "\nPhuong trinh vo nghiem!";
		}
		else {
			cout << "\nPhuong trinh co mot nghiem: x = " << -c / b;
		}
		return;
	}
	// tinh delta
	float delta = b * b - 4 * a * c;
	float x1;
	float x2;
	// tinh nghiem
	if (delta > 0) {
		x1 = (float)((-b + sqrt(delta)) / (2 * a));
		x2 = (float)((-b - sqrt(delta)) / (2 * a));
		cout << "\nPhuong trinh co 2 nghiem la : x1 = " << x1 << "va x2 = " << x2;
	}
	else if (delta == 0) {
		x1 = (-b / (2 * a));
		cout << "\nPhong trinh co nghiem kep: x1 = x2 = " << x1;
	}
	else {
		cout << "\nPhuong trinh vo nghiem!";
	}
}