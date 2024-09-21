

#include <iostream>
#include <windows.h>
#include<iomanip>
#include <locale>
#include <string>



#include"Header.h"
using namespace std;


int main() {
	SetConsoleOutputCP(CP_UTF8);
	std::setlocale(LC_ALL, "Russian");

	string word;
	
	cin >> word;
	cout << word.length()  << endl;
	
	int number = word.length();
	cout << number << endl;

	char letter;
	cin >> letter;

	/*cout << endl;
	cout <<" O" << endl;
	cout << "/|\\" << endl;
	cout << "/ \\ " << endl;

	cout << endl;
	cout << " O" << endl;
	cout << "/|\\" << endl;
	cout << "/ \\  |" << endl;
	cout << "     |" << endl;
	cout << "======" << endl;


	cout << endl;
	cout << " O   |" << endl;
	cout << "/|\\  |" << endl;
	cout << "/ \\  |" << endl;
	cout << "     |" << endl;
	cout << "======" << endl;

	cout << endl;
	cout << "     *" << endl;
	cout << "     |" << endl;
	cout << " O   |" << endl;
	cout << "/|\\  |" << endl;
	cout << "/ \\  |" << endl;
	cout << "     |" << endl;
	cout << "======" << endl;

	cout << endl;
	cout << " *---*" << endl;
	cout << " |   |" << endl;
	cout << " O   |" << endl;
	cout << "/|\\  |" << endl;
	cout << "/ \\  |" << endl;
	cout << "     |" << endl;
	cout << "======" << endl;*/




    return 0;
}



