#include <iostream>
using namespace std;

int main()
{
	char a;
	int b, n;
	n = 0;
	cout << "Enter the initial direction and command." << endl;
	cin >> a >> b;
	if (a == 'n')
		n = 0;
	if (a == 'w')
		n = 1;
	if (a == 's')
		n = 2;
	if (a == 'e')
		n = 3;
	n = (n + b) % 4;
	if (n == 0)
		cout << "North";
	if (n == 1)
		cout << "West";
	if (n == 2)
		cout << "South";
	if (n == 3)
		cout << "East";
}
