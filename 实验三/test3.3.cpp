#include <iostream>
using namespace std;
#include "mytemperature.h"

int main()
{
	double fah, cel;
	cout << "Celsius:" << endl;
	cin >> cel;
	cout << "Fahrenheit:" <<"\n" << celsius_to_fah(cel) << endl;
	cout << "Fahrenheit:" << endl;
	cin >> fah;
	cout << "Celsius:" << "\n" << fahrenheit_to_cels(fah) << endl;
	return 0;
}


