#include <iostream>
#include<string>
#include<iomanip>
#include<Windows.h>
#include<conio.h>






#include "Funcs.h"

using namespace std;

int main() {


    SetConsoleOutputCP(CP_UTF8);
    std::setlocale(LC_ALL, "Russian");




    string word;
    cout << "Enter the word: " << endl;
    cin >> word;
    cout << word << endl;
    cout << SplitWord(word) << endl;


    /*cout << endl;
    cout <<" O" << endl;
    cout << "/|\" << endl;
    cout << "/ \ " << endl;

    cout << endl;
    cout << " O" << endl;
    cout << "/|\" << endl;
    cout << "/ \  |" << endl;
    cout << "     |" << endl;
    cout << "======" << endl;


    cout << endl;
    cout << " O   |" << endl;
    cout << "/|\  |" << endl;
    cout << "/ \  |" << endl;
    cout << "     |" << endl;
    cout << "======" << endl;

    cout << endl;
    cout << "     " << endl;
    cout << "     |" << endl;
    cout << " O   |" << endl;
    cout << "/|\  |" << endl;
    cout << "/ \  |" << endl;
    cout << "     |" << endl;
    cout << "======" << endl;

    cout << endl;
    cout << "---" << endl;
    cout << " |   |" << endl;
    cout << " O   |" << endl;
    cout << "/|\  |" << endl;
    cout << "/ \  |" << endl;
    cout << "     |" << endl;
    cout << "======" << endl;*/

}
