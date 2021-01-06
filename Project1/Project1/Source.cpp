#include<iostream>
using namespace std;
void main()
{
	float dai, rong,rongv;
	cout << "Nhap chieu dai= ";
	cin >> dai;
	cout << "Nhap chieu rong= ";
	cin >> rong;
	cout << "Dien tich hinh chu nhat la: " << dai*rong << "\n";
	cout << "Chu vi hinh chu nhat la: " << (dai + rong) * 2 << "\n";
	cout << "Nhap rong= " << "\n";
	cin >> rongv;
	cout << "Dien tich hinh vuong la: " << rongv*rongv << "\n";
	cout << "Dien tich hinh vuong la: " << rongv - rongv << "\n";
	cout << "chu vi hinh vuong la: " << rongv*4 << "\n";
	system("pause");

}