#include <iostream>

using namespace std;
int main() {
	int choice(0);
	double celsius(0);
		double fahrenheit(32);
		double kelvin (273.15);
	while (choice <1 || choice > 3) 
		{
  cout << "In what to you want to input the temperature? \n 1. Celsius \n 2. Fahrenheit \n 3. Kelvin \n ";
	cin >> choice;
			}
	if (choice == 1) {
		cout << "Say a temperature in Celsius: ";
		cin >> celsius;
		fahrenheit = celsius * 9/5 + 32;
		kelvin = celsius + 273.15;
		cout << "Celsius: " << celsius << endl;

		cout << "Fahrenheit: " << fahrenheit << endl;
		cout << "Kelvin: " << kelvin << endl;
	}
	else if (choice ==2) {
		cout << "Say a temperature in Fahrenheit: ";
		cin >> fahrenheit;
		celsius = (fahrenheit - 32) / 1.8;
		kelvin = (fahrenheit-32)/1.8 + 273.15;
		cout << "Fahrenheit: " << fahrenheit << endl;
		cout << "Celsius: " << celsius << endl;

		
		cout << "Kelvin: " << kelvin << endl;
	}
	else {
		
	}

	return 0;
}