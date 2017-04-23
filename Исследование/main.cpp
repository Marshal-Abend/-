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


string sumS(string a, string b, int pos) {
	int ost=0,u=0; int buff;
	for (int i = pos; i < b.length() + pos; i++)
	{
		while (a.length() < b.length() + pos)a.push_back('0');
		buff = (a[i] - '0') + (b[i-pos] - '0') % 10;
		u = buff + u;
		u /= 10;
		if ((buff + ost) > 9) {
			a[i] = (buff + ost) % 10 + '0';
		}
		else a[i] = buff + ost + '0';
		ost = u % 10;
		if (i == b.length()+pos-1 && ost!=0)b.push_back('0');
	}
	return a.substr(0, a.length());
}


string factorial(int n) {
	if (n<0)
	{
		return "";
	}
	else if (n==(0||1))
	{
		return "1";
	}
	string a="1";
	int u = 1,iter;
	if (n == 1)return a;
	for(int i=2;i<=n;++i)
	{


	}
	int l= a.length()-1;
	for (int i = 0; i <= l; ++i,--l)
	{
		char buff = a[i];
		a[i] = a[l];
		a[l] = buff;
	}
	return a.substr(0,a.length());
}





int main() {
	setlocale(LC_ALL, "Russian");
	cout << sumS("2","2",0);
	//factorial(5);

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
