#include <iostream>
#include <Windows.h>

using namespace std;

struct dack
{

};

/*struct Rab
{
	char name[10];
	int weight;
	int tall;
};

void func(Rab &rab) {
	cin >> rab.name;
	cin >> rab.weight;
	cin >> rab.tall;
	//cout << rab.name << endl << rab.weight << endl << rab.tall << endl;
}*/

int huemain(int &a) {
	a = a + 100;
	int *b = &a;
	cout << b <<" " << a<< endl;
	return a;
}

int huemain(int *a) {
	*a = *a + 100;
	int *b = a;
	cout << b << " " << *a << endl;
	return *a;
}

/*int huemain(int a) {
	a = a + 100;
	int *b = &a;
	cout << b << " " << a << endl;
	return a;
}*/

void BasicCppPtr(int *n) {
	int xoy;
	cin >> xoy;
	*n = xoy;
}

int SumOfRatio() {
	int max, min,sum=0;
	cin >> min;
	cin >> max;
	if (max % 2 == 1) {
		while (max >= min) {
			sum = sum + max;
			max -= 2;
		}
	}
	else if (max % 2 == 0) {
		max--;
		while (max >= min) {
			sum = sum + max;
			max -= 2;
		}
	}
	return sum;
	}

void triangreH(int n) {
	for (int k = 0; k < n; k++) {
		cout << endl;
		for (int i = 0; i < n-k; i++) {
			cout << " ";
		}
		for (int i = n - k; i <= n + k; i++) {
			cout << "^";
		}

	}
	cout << endl;
}

int aVoVtoroi(int n) {
	return n*n;
}

int maxOf(int a,int b) {
	if (a - b > 0) { return a; }
	else return b;
 }

double maxOf(double a, double b) {
	if (a - b > 0) { return a; }
	else return b;
}

class nigers{
	private:
		char Name[22];
		int Height, Weight;
		double price;
	public:
		void setData_brend(char *brand_name) {
			strcpy_s(Name,brand_name);
		}
		void setData_size(int height,int weight) {
			Height = height;
			Weight = weight;
		}
		void setData_cost(double cost) {
			price = cost;
		}
		void getData() {
			cout << "Higer " << Name<<"  " << Height << "cm tall  " << Weight << "kg" << "  Cost " << price << "$"<< endl;
		}
	};

void dvaVStepeniX() {
	long long int f;
	for (long double i = 1; i < 100; i++) {
		f = pow(( long double)2.0, i);
		cout << "2 в степени " << i << " = " << f << endl;
	}
};


void discriminant() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float a, b, c;
	cout << "Введите a,b,c"<< endl;
	cin >> a; cin >> b; cin >> c;
	float d = sqrt(b*b - 4 * a * c);
	float root1 = (-b + d) / (2 * a);
	float root2 = (-b - d) / (2 * a);
	cout << "Первый корень " << root1 << endl;
	cout << "Второй корень " << root2 << endl;
	system("pause");
}


void dishonestSeller() {
	float x, y, t;
	cin >> x; cin >> y;
	t = ((y-x)/x*100);
	cout << t <<"%"<<endl;
	system("pause");
}


void RatioOfBoysAndGirls() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x, y;
	cin >> x; cin >> y;
	cout << 100/(x + y) * x<< "% - "<< 100 - (100 / (x + y) * x)<<"%"<<endl;
	system("pause");
}


void BloodPeroids() {
	int n,t;
	cin >> n; cin >> t;
	cout << n*12*t<<" Days"<<endl;
	system("pause");
}


void GoodWorker() {
	setlocale(LC_ALL, "Russian");
	int n, a, k, r;
	double kof;
	kof = (100.0 / 24);
	cin >> n; cin >> a; cin >> k;
	r = (k - 18);
	cout << (kof * a) << "% - " << 100-(kof * a) << "% - "<< (kof * n) << "%"<< endl;
	if (r > 0) { 
		
		cout << ((365*(r-r / 4)*24)+(366* (r / 4)*24))*(kof * a) << endl; }
	else {
		cout << "Ещё не работает" << endl;
	}
	system("pause");
}


void ProgramistAndWebProgramistDay() {
	setlocale(LC_ALL, "Russian");
	int den,denP,denWP,vis,counter,year;
	counter = 0;
	year=2017;
	den = 7;
	denP = denWP = den;
	vis = 1;
	for (int i = 1; i <= 101; i++) 
	{
		cout << "-------" << year << endl;
		if ((year % 4 != 0) || (year % 100 == 0 && year % 400 != 0)) {
			for (int i = 1; i < 256; i++, denP++) {
				if (denP == 7)denP = 0;
			}
			if (denP == 0)denP = 7;
			cout <<"День программиста "<< denP << endl;
			//////////////////////
			for (int i = 1; i < 94; i++) {
				if (denWP == 7)denWP = 0;
				denWP++;
			}
			if (denWP == 0)denWP = 7;
			cout << "День веб-программиста " << denWP << endl;
			//////////////////////
			for (int i = 1; i <366; i++, den++) {
				if (den == 7)den = 0;
			}
			if (denP == denWP)counter++;
			if (den == 0)den = 7;
			cout << den << endl;
			denP = denWP = den;
			vis++;
			year++;
		} else {
			for (int i = 1; i < 256; i++, denP++) {
				if (denP == 7)denP = 0;
			}
			if (denP == 0)denP = 7;
			cout << "День программиста " << denP << endl;
			//////////////////////
			for (int i = 1; i <95; i++) {
				if (denWP == 7)denWP = 0;
				denWP++;
			}
			if (denWP == 0)denWP = 7;
			cout << "День веб-программиста " << denWP << endl;
			//////////////////////
			for (int i = 1; i <367; i++, den++) {
				if (den == 7)den = 0;
			}
			if (denP == denWP)counter++;
			if (den == 0)den = 7;
			denP = denWP = den;
			cout << den << endl;
			vis = 1;
			year++;
		}
	}
	cout << "Совпадений = " << counter << endl;
	system("pause");
}


void SumOfSinuses() {
	int l,d;
	double SinSum, MaxSinSum, Sum;
	SinSum = MaxSinSum = Sum = l = d = 0;
	double  Max[2][20], s[2][20];
	const double p[2][100] = {
		{33, 77, 121, 190, 165, 146, 102, 58, 14, 8, 52, 96, 140, 171, 184, 127, 83, 39, 27, 71, 115, 196, 159, 152, 108, 64, 20, 2, 46, 90, 134, 177,
		178, 133, 89, 45, 1, 21, 65, 109, 153, 158, 197, 114, 70, 26, 40, 84, 128, 183, 172, 139, 95, 51, 7, 15, 59, 103, 147, 164, 191, 120, 76, 32,
		34, 78, 122, 189, 166, 145, 101, 57, 13, 9, 53, 97, 141, 170, 185, 126, 82, 38, 28, 72, 116, 195, 160, 151, 107, 63, 19, 3, 47, 91, 135, 176,
		179, 132, 88, 44},
		{0.99991186,0.999520159,0.998815225,0.997799279,0.997797279,0.996469173,0.994826791,0.992872648,0.990607356,0.989358247,0.986627592,0.983587745,
		0.980239659,0.976590868,0.976584383,0.972630067,0.968364461,0.963795386,0.956375928,0.951054653,0.945435334,0.939530056,0.939519732,0.933320524,
		0.926818505,0.920026038,0.912945251,0.909297427,0.901788348,0.893996664,0.885924816,0.877589788,0.877575336,0.868965756,0.860069406,0.850903525,
		0.841470985,0.836655639,0.826828679,0.816742607,0.806400581,0.795824097,0.795805843,0.784980389,0.773890682,0.76255845,0.74511316,0.73319032,
		0.721037711,0.708680408,0.70865914,0.696080131,0.683261715,0.670229176,0.656986599,0.65028784,0.636738007,0.622988631,0.609044022,0.594932778,
		0.594908548,0.580611184,0.566107637,0.551426681,0.529082686,0.513978456,0.498713154,0.483317954,0.483291564,0.467745162,0.452025787,0.436164755,
		0.420167037,0.412118485,0.39592515,0.379607739,0.363171365,0.346649455,0.34662118,0.329990826,0.313228782,0.296368579,0.270905788,0.253823363,
		0.236661393,0.219454668,0.219425258,0.202149881,0.184781745,0.1673557,0.14987721,0.141120008,0.123573123,0.105987512,0.088368686,0.070752236,
		0.070722167,0.053083587,0.035398303,0.017701925,} };
	
	for (int i = 0; i < 100; i++) {                                        //100 входов в цикл для перебора

		for (int l = 0; l < 20; l++) {                                     //присваивание начальных значений линии
			s[0][l] = p[0][i];
			s[1][l] = p[1][i];
		}
		for (int i=0;i<20; i++) {													//смешение влево на символ
			for (int k = 0; k < 100; k++) {										//Перебор в одной ячейке			
				s[0][19 - l] = p[0][k];
				for (int i = 0; i < 20; i++) {									//счёт суммы 
					Sum = Sum + s[0][i];
				}
				if (Sum == 200) {
					for (int i = 0; i < 20; i++) {
						SinSum = SinSum + s[1][i];								//счёт синуса суммы
					}
					if (SinSum > MaxSinSum) {
						MaxSinSum = SinSum;										//сравнение с максимальным
						for (int i = 0; i < 20; i++) {
							Max[0][i] = s[0][i];
							Max[1][i] = s[1][i];
						}
					}
				}
				SinSum = 0;
				Sum = 0;
			}
			l++;
		}
		l = 0;
	}
	cout << MaxSinSum << endl;
	for (int i=0;i<20;i++) {
		cout << Max[0][i]<<" ";
	}
	cout << endl;
}


void Calorys() {
	int k, age;
	bool error = false;
	char y;
	double h, w, n, kof;
	cout << "Are you a men?(Y/N)" << endl;
	cin >> y;
	cout << "How old are you?" << endl;
	cin >> age;
	cout << "How tall are you?" << endl;
	cin >> h;
	cout << "How much do you weigh?" << endl;
	cin >> w;
	cout << "Your level of physical activity?" << endl;
	cout << "Minimum level of physical activity - put 1" << endl;
	cout << "Light level of physical activity - put 2" << endl;
	cout << "Normal level of physical activity - put 3" << endl;
	cout << "High level of physical activity - put 4" << endl;
	cout << "Extreme level of physical activity - put 5" << endl;
	cin >> k;
	switch (k)
	{
	case 1:kof = 1.2;
		break;
	case 2:kof = 1.4;
		break;
	case 3:kof = 1.6;
		break;
	case 4:kof = 1.8;
		break;
	case 5:kof = 2.0;
		break;
	default: error = true;
		break;
	}
	cout << "How much weight you want to lose?" << endl;
	cin >> n;
	n = n * 1000;
	double wmcof = (((9.99*w + 6.25 *h -4.92*age - 161)*kof)*0.2)/9;
	double mcof = (((9.99*w + 6.25*h - 4.92*age + 5)*kof)*0.2)/9;
	switch (y)
	{
	case ('y'): 
		cout << int(n / mcof) << " Days"<< endl;
		 break;
	case ('Y'):
		cout << int(n / mcof) << " Days" << endl;
		break;
	case ('n'):
		cout << int(n / wmcof) << " Days" << endl;
		break;
	case ('N'):
		cout << int(n / wmcof) << " Days" << endl;
		break;
	default:
		break;
	}
	}


