#include <iostream>
using namespace std;
int main()
{
	cout << "tinh dien tich chu vi hinh tron\n";
	double chuvi, dientich, bankinh, pi;
	pi = 3.14;

	cout << "nhap bankinh "; cin >> bankinh ;

	chuvi = 2 * pi * bankinh;
	dientich = pi * bankinh * bankinh;

	cout << "chuvi :" << chuvi << endl;
		cout << "dientich :" << dientich << endl;
		return 0; 
		

}