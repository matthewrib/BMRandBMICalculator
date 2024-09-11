/*
	BMRandBMICalculator.cpp
	Matthew Bersalona
	CSCI 123 C
	09/10/2024
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	double weight, height, age, BMR, BMI;
	char gender, redo;
	string classification;
	const double poundsToKG = 2.2;
	const double inchesToCM = 2.54;

	do {
		cout << "Enter weight in pounds: ";
		cin >> weight;
		cout << "Enter height in inches: ";
		cin >> height;
		cout << "Enter age in years: ";
		cin >> age;
		cout << "Enter your gender as M/F: ";
		cin >> gender;

		BMI = (weight / (height * height)) * 703;
		BMR = (10 * (weight / poundsToKG)) + (6.25 * (height * inchesToCM)) - (5 * age);

		if (gender == 'M') {
			BMR += 5;
		}
		else {
			BMR -= 161;
		}

		if (BMI < 18.5) {
			classification = "underweight";
		}
		else if (BMI < 25) {
			classification = "normal weight";
		}
		else if (BMI < 30) {
			classification = "overweight";
		}
		else {
			classification = "obese";
		}

		cout << "Your calculated BMR is " << BMR << " calories.\n";
		cout << "Your calculated BMI is " << BMI << ", meaing you are " << classification << ".\n";
		cout << "Warning: These values are only estimates. Consult your physician for accurate information.\n";
		cout << "Would you like to calculate for another person? Y/N: ";
		cin >> redo;
		cout << "\n";
	} while (redo == 'Y');

	return 0;
}