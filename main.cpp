#include <iostream>
using namespace std;

	double hatSize( double w, double h){
		double hat;
		hat = (w / h) * 2.9;
		return hat;
	}

	double jacketSize( double h, double w, int a){
		double jacket , overThirty;
	
	
		if(a < 40)
		{
		jacket = (h * w) / 288;
		}else if (a >= 40)
		{
		a = a - 30;
		a = a / 10;
		overThirty = a * 0.125;
		jacket = ((h * w) / 288) + overThirty;
	}
		return jacket;
	}

	double waistSize( double weight, int age) {
		
		double waist , overTwentyEight;
	
		if(age < 30)
		{
			waist = weight / 5.7;
		}else if (age >= 30)
		{
			age = age - 28;
			age = age / 2;
			overTwentyEight = age * 0.1;
			waist = (weight / 5.7) + overTwentyEight;
	}
		return waist;		
	}


int main() {
	int height , weight , age;
	double hat , jacket , waist;
	char decision;
	
	do {
	cout << "Please enter your height in inches ";
	cin >> height;
	cout << "Please enter weight in pounds ";
	cin >> weight;
	cout << "Please enter your age ";
	cin >> age;
	
	hat = hatSize(weight, height);
	cout << "Your hat size is " << hat << endl;
	jacket = jacketSize(height, weight, age);
	cout << "Your jacket size is " << jacket << endl;
	waist = waistSize(weight, age);
	cout << "Your waist size is " << waist << endl;
	cout << "would you like to enter another measurement? Y/N. ";
	cin >> decision;
	} while( ('Y' || 'y') == decision );
	
	return 0;
}