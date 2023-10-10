#include <iostream>

using namespace std;

int a = 0;
int b = 0;

int main() {
	cout << "Please input two integers: ";
	cin >> a >> b;
	if (a%b == 0)
		cout << "第一个数是第二个数的倍数。" << endl;
	else
		cout << "第一个数不是第二个数的倍数。" << endl;
	system("pause");
	return 0;
}
