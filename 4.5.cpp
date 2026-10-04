// Lab_04_5.cpp
// Кучальська Власта
// Лабораторна робота № 4.5
// «Попадання» у плоску фігуру
// Варіант 13
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R1, R2;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R1 = "; cin >> R1;
		cout << "R2 = "; cin >> R2;
		if ((pow(x, 2) + pow(y, 2) <= pow(R2, 2) && x <= 0 && y >= 0)
			|| (pow(x, 2) + pow(y, 2) >= pow(R2, 2) 
				&& pow(x, 2) + pow(y, 2) <= pow(R1, 2) && x >= 0 && y <= 0))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;
	for (int i = 0; i < 10; i++)
	{
		cout << "R1 = "; cin >> R1;
		cout << "R2 = "; cin >> R2;
		x = 2. * R1 * rand() / RAND_MAX - R1;
		y = 2. * R1 * rand() / RAND_MAX - R1;
		if ((pow(x, 2) + pow(y, 2) <= pow(R2, 2) && x <= 0 && y >= 0)
			|| (pow(x, 2) + pow(y, 2) >= pow(R2, 2) 
				&& pow(x, 2) + pow(y, 2) <= pow(R1, 2) && x >= 0 && y <= 0))
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}
