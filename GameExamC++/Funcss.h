#include <iostream>
#include <windows.h>
#include<iomanip>
#include <locale>
#include <string>

using namespace std;

char* SplitWord(string word, char*& letters1)
{
    int len = word.length();
    char* letters = new char[len + 1];
    for (int i = 0; i < len; i++)
    {
        letters[i] = word[i];
    }
    letters[len] = '\0';

    letters1 = letters;
    return letters;
}


int checking(char letters1[], string word, char letter, int index[], int max_size)
{
    int quantity = 0;
    int number = word.length();
    for (int i = 0; i < number && quantity < max_size; i++)
    {
        if (letter == letters1[i])
        {
            index[quantity] = i;
            quantity++;
        }
    }

    return quantity;
}

void Human(int number)
{
    switch (number)
    {
    case 1:
        cout << " O" << endl;
        cout << "/|\\" << endl;
        cout << "/ \\  |" << endl;
        cout << "     |" << endl;
        cout << "======" << endl;
        break;
    case 2:
        cout << " O   |" << endl;
        cout << "/|\\  |" << endl;
        cout << "/ \\  |" << endl;
        cout << "     |" << endl;
        cout << "======" << endl;
        break;
    case 3:
        cout << "     *" << endl;
        cout << "     |" << endl;
        cout << " O   |" << endl;
        cout << "/|\\  |" << endl;
        cout << "/ \\  |" << endl;
        cout << "     |" << endl;
        cout << "======" << endl;
        break;
    case 4:
        cout << " *---*" << endl;
        cout << " |   |" << endl;
        cout << " O   |" << endl;
        cout << "/|\\  |" << endl;
        cout << "/ \\  |" << endl;
        cout << "     |" << endl;
        cout << "======" << endl;
        break;
    default:
        cout << "Игра окончена!" << endl;
        break;
    }
}