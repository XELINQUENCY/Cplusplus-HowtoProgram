#include <iostream>

using namespace std;

double a = 0;
double b = 0;
double c = 0;
int largest = 0;
int smallest = 0;

int main() {
	cout << "Input three different integers: ";
	cin >> a >> b >> c;
	if (a != static_cast<int>(a) || b != static_cast<int>(b) || c != static_cast<int>(c)) {
		cout << "Your inputs are invalid!";
		return -1;
	}
	if (a > b) {
		if (b > c) {
			largest = a;
			smallest = c;
		}
		else {
			if (a > c) {
				largest = a;
				smallest = b;
			}
			else {
				largest = c;
				smallest = b;
			}
		}
	}
	else {
		if (a > c) {
			largest = b;
			smallest = c;
		}
		else {
			if (b > c) {
				largest = b;
				smallest = a;
			}
			else {
				largest = c;
				smallest = a;
			}
		}
	}
	cout << "Sum is " << a + b + c << "\n";
	cout << "Average is " << (a + b + c) / 3 << "\n"; //int除法只能输出整数也太离谱了
	cout << "Product is " << a * b*c << "\n";
	cout << "Smallest is " << smallest << "\n";
	cout << "Largest is " << largest << endl;
	system("pause");
	return 0;
}
