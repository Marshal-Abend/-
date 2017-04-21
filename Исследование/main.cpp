#include <sstream>
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>
#include "MyMath.h"
#include <string>
#include <fstream>


using namespace std;

#include <vector>








int main() {
	setlocale(LC_ALL, "Russian");

	int x, y = rand() % 100 + 1;
	cout << "Введите писло: ";
	cin >> x;
	while (x != y)
	{
		(x > y) ? (cout << " Много" << endl) : (cout << " Мало" << endl);
		cout << "Введите писло: ";
		cin >> x;
	}

	cout<< " Вы Угадали!" << endl;

	system("pause");
	return 0;
}









































































/*int main() {
	setlocale(LC_ALL, "Russian");

	int count;
	bool k;
	char brand[23];
	int size_w, size_h;
	double price;
	nigers a[100];

	cout << "How many niggers you want to buy? ";
	cin >> count;
	cout << endl;
	for (int i = 0; i < count; i++) {
		a[i];
		cout << "Name of nigger ";
		cin >> brand;
		cout << endl;
		cout << "Height of nigger  ";
		cin >>size_h;
		cout << endl;
		cout << "Weight of nigger  ";
		cin >> size_w;
		cout << endl;
		cout << "Price of nigger  ";
		cin >> price;
		cout << endl;
		a[i].setData_size(size_h, size_w);
		a[i].setData_brend(brand);
		a[i].setData_cost(price);
	}
	cout << "Do you want to see nigers? ";
	cin >> k;
	if (k > 0) {
		for (int i = 0; i < count; i++) {
			a[i].getData();
		}
	}
	system("pause");

	return 0;
}*/
