#include <iostream>

using namespace std;

int a = 0;
int b = 0;

int main() {
	cout << "Please input two integers: ";
	cin >> a >> b;
	if (a%b == 0)
		cout << "��һ�����ǵڶ������ı�����" << endl;
	else
		cout << "��һ�������ǵڶ������ı�����" << endl;
	system("pause");
	return 0;
}