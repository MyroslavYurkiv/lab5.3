#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double j(const double x);
int main()
{
	setlocale(LC_ALL, "Russian");
	double kp, kk, z;
	int n;
	cout << "kp = "; cin >> kp;
	cout << "kk = "; cin >> kk;
	cout << "n = "; cin >> n;
	cout << "------------------------------------------------------------------------------" << endl;
	cout << "|" << setw(5) << "Функцii, що мiстять розгалуження та цикли з рекурентними спiввiдношеннями" << setw(4) << " |" << endl;
	cout << "------------------------------------------------------------------------------" << endl;
	cout << "|" << setw(5) << "Лабораторна №5.3" << setw(61) << " |" << endl;
	cout << "|" << setw(5) << "Юркiв Мирослав" << setw(63) << " |" << endl;
	cout << "------------------------------------------------------------------------------" << endl;
	cout << "|" << setw(20) << "k" << setw(19) << "|" << setw(19) << "z" << setw(19) << " |" << endl;
	cout << "------------------------------------------------------------------------------" << endl;
	double dk = (kk - kp) / n;
	double k = kp;
	while (k <= kk)
	{
		 z = j(k) + pow(j(k - 1), 2) + 2 * j(1);
		cout << "|" << setw(20) << setprecision(4) << k << setw(19) << "|" << setw(22) << setprecision(10) << z << setw(16) << "|"<< endl;
		k += dk;
	}
	cout << "------------------------------------------------------------------------------" << endl;
	return 0;
}
	double j(const double x)
{
	if (abs(x) >= 1)
		return (sin(x) + 1) / (pow(cos(x), 2) + exp(x));
	else
	{
		double S = 0;
		int i = 0;
		double a = 1;
		while (i < 7) {
		
			double R = (4 * pow(x, 2)) / ((2 * i + 1) * (2 * i + 2));
			a *= R;
			S += a;
			i++;
		}
		return (1 / cos(2 * x)) * S ;
	}
}