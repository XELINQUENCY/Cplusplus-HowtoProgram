#include <iostream>
using namespace std;

char a[5];
int i;

int main() {
	cout << "请输入一个五位整数：";
	cin >> a;
	for (i = 0; i < 5; i++) {
		if (i != 4)
			cout << a[i] << "   ";
		else
			cout << a[i] << "\n";
	}
	system("pause");
	return 0;
}