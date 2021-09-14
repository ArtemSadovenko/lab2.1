// Lab_02.cpp
// Садовенко Артем
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 18

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
	double a;
	double z1;
	double z2;
	cout << "a = "; cin >> a;
	if (a == 2 || a == 0 || a == -2 || a == sqrt(2*a)){
		cout << "not avalable" << endl;
	}
	z1 = ((((a + 2) / (sqrt(2 * a))) - (a / (sqrt(2 * a) + 2)) + (2 / (a - sqrt(2 * a)))) * ((sqrt(a) - sqrt(2)) / (a + 2)));
	z2 = (1 / (sqrt(a) + sqrt(2)));
	
		cout << z1 << endl;
		cout << z2 << endl;
		cout << "tie" << endl;
	return 0;
}