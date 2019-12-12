#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, s, d, e, o;
	cout << "Введите число (100 - 999)" << endl;
	cin >> a;
	s = a / 100;
	o = a % 100;
	d = o / 10;
	e = o % 10;
	if (s == 1)
		cout << "сто ";
	if (s == 2)
		cout << "двести ";
	if (s == 3)
		cout << "триста ";
	if (s == 4)
		cout << "четыреста ";
	if (s == 5)
		cout << "пятьсот ";
	if (s == 6)
		cout << "шестьсот ";
	if (s == 7)
		cout << "семьсот ";
	if (s == 8)
		cout << "восемьсот ";
	if (s == 9)
		cout << "девятьсот ";
	if (d == 1)
	{
		if (e == 0)
			cout << "десять ";
		if (e == 1)
			cout << "одиннадцать ";
		if (e == 2)
			cout << "двенадцать ";
		if (e == 3)
			cout << "тринадцать ";
		if (e == 4)
			cout << "четырнадцать ";
		if (e == 5)
			cout << "пятнадцать ";
		if (e == 6)
			cout << "шестнадцать ";
		if (e == 7)
			cout << "семнадцать ";
		if (e == 8)
			cout << "восемнадцать ";
		if (e == 9)
			cout << "девятнадцать ";
	}
	if (d == 2)
		cout << "двадцать ";
	if (d == 3)
		cout << "тридцать ";
	if (d == 4)
		cout << "сорок ";
	if (d == 5)
		cout << "пятьдесят ";
	if (d == 6)
		cout << "шестьдесят";
	if (d == 7)
		cout << "семьдесят ";
	if (d == 8)
		cout << "восемьдесят ";
	if (d == 9)
		cout << "девяносто ";
	if (d != 1)
	{
		if (e == 1)
			cout << "один";
		if (e == 2)
			cout << "два";
		if (e == 3)
			cout << "три";
		if (e == 4)
			cout << "четыре";
		if (e == 5)
			cout << "пять";
		if (e == 6)
			cout << "шесть";
		if (e == 7)
			cout << "семь";
		if (e == 8)
			cout << "восемь";
		if (e == 9)
			cout << "девять";
	}
}
