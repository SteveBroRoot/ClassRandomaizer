#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");
	srand((unsigned)time(0));
	int b;
	int a;
	string n;
	string L8[] = { "Enter", "your", "classmates", "here"}; //instead of L8, enter your class number and letter
	cout << "Выберите класс: Пример: L8" << endl;
	cin >> n;
	START:
	a = rand() % 32;
	cout << L8[a] << endl;
	cout << "Повторить рандом? Выберите:" << endl;
	cout << "1 - Да" << endl;
	cout << "2 - нет" << endl;
	cin >> b;
	if (b == 1) {
		goto START;
	}
	else {
		exit(0);
	}

}