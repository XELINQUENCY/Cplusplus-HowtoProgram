#include <iostream>
using namespace std;

char a[5];
int i;

int main() {
	cout << "������һ����λ������";
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