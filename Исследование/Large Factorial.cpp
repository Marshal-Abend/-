#include <sstream>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <fstream>
#include <vector>
#include <thread>
#include <iterator>
#include <algorithm>
#include <Windows.h>
#include "Large Factorial.h"

using namespace std;




void waiter(bool *quit, int *i) {
	string s;
	while (s!="quit")
	{
		getline(cin, s);
		if (s == "stat") 
		{
			cout << *i << endl; 
		}
		else if (s == "cls") 
		{
			system("cls"); 
		}
	}
	*quit=true;
};


void factorial_continue(bool *quit) {
	ifstream input("factorial.txt");
	string s;
	getline(input, s);
	getline(input, s);
	int n = atoi(s.c_str());
	getline(input, s);
	int ic = atoi(s.c_str());
	int i;
	int *sc = &i;
	thread q(waiter, quit, sc);
	q.detach();
	getline(input, s);
	vector<int> v(s.begin(), s.end());
	for_each(v.begin(), v.end(), [](int &n) { n-=48; });
	for ( i = ic; i <= n; i++) {
		int r = 0;
		for (int j = 0; j < (int)v.size(); j++) {
			v[j] *= i;
			v[j] += r;
			r = v[j] / 10;
			v[j] %= 10;
		}
		while (r > 0) {
			v.push_back(r % 10);
			r /= 10;
		}
		if (*quit)
		{
			ofstream potok("factorial.txt", ios_base::trunc | ios_base::out);
			potok << 0 << endl << n << endl << i << endl;
			for (size_t i = 0; i < v.size(); ++i)
			{
				potok << v[i];
			}
			potok.close();
			cout << "Данные успешно сохранены в файл factorial.txt\n";
			return;
		}
	}
	string result;
	for (auto i = v.rbegin(); i != v.rend(); i++) {
		result += '0' + (*i);
	}
	ofstream potok("factorial.txt", ios_base::trunc | ios_base::out);
	potok << 1 << endl << n << endl << result;
	potok.close();
	cout << "Данные успешно записаны в файл factorial.txt\n";
	return;
}


void factorial_first_run(bool *quit) {
	int n;
	cout << "Введите число n! ";
	cin >> n;
	int i;
	int *sc = &i;
	thread q(waiter, quit,sc);
	q.detach();
	if (n < 0) return;
	if (n <= 1) {
		ofstream potok("factorial.txt", ios_base::trunc | ios_base::out);
		potok << 1 << endl<<1<<endl;
		potok.close();
	};
	std::vector<int> v = { 2 };
	for ( i = 3; i <= n; i++) {
		int r = 0;
		for (int j = 0; j < (int)v.size(); j++) {
			v[j] *= i;
			v[j] += r;
			r = v[j] / 10;
			v[j] %= 10;
		}
		while (r > 0) {
			v.push_back(r % 10);
			r /= 10;
		}
		if (*quit)
		{
			ofstream potok("factorial.txt", ios_base::trunc | ios_base::out);
			potok << 0 << endl << n << endl << i << endl;
			for (size_t i = 0; i < v.size(); ++i)
			{
				potok << v[i];
			}
			potok.close();
			cout << "Данные успешно сохранены в файл factorial.txt\n";
			return;
		}
	}
	string result;
	for (auto i = v.rbegin(); i != v.rend(); i++) {
		result += '0' + (*i);
	}
	ofstream potok("factorial.txt", ios_base::trunc | ios_base::out);
	potok << 1 << endl << n << endl << result;
	potok.close();
	cout << "Данные успешно записаны в файл factorial.txt\n";
	return;
}


void threaded_factorial(bool* quit) {
	thread m(factorial_first_run,quit);
	m.join();
}


void large_factorial(){
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	ifstream input("factorial.txt");
	int z = input.get()-48;
	bool quit=false;
	string s;
	if (!input.is_open()) {
		threaded_factorial(&quit);
	}
	else if (input.eof())
	{
		threaded_factorial(&quit);
	}
	else if (z==1) {
		threaded_factorial(&quit);
	}
	else if (z==0)
	{
		getline(input,s);
		getline(input, s);
		cout << "Досчитать?"<<endl << "Прогресс " << s;
		getline(input, s);
		cout << " из " << s << endl;
		cout << "(1 - Yes, 0 - No) ";
		int dec;
		cin >> dec;
		if (dec == 0) {
			threaded_factorial(&quit);
		}
		else
		{
			factorial_continue(&quit);
		}
		
	}
	system("pause");
	return;
}