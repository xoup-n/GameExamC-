#include <iostream>
#include <windows.h>
#include<iomanip>
#include <locale>
#include <string>


#include"Funcss.h"
using namespace std;


int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::setlocale(LC_ALL, "Russian");

    int number = 0;
    string word;

    cout << "Введите слово: ";
    cin >> word;
    system("cls");

    int max_attempts = 4;
    char letter;
    char* letters1 = nullptr;
    char* result = SplitWord(word, letters1);

    const int max_size = 30;
    char underscore[max_size] = { 0 };
    int index[max_size] = { 0 };
    bool guessed[max_size] = { false };


    for (size_t i = 0; i < word.length(); i++)
    {
        underscore[i] = '_';
    }


    while (number < max_attempts)
    {
        cout << "Слово: ";
        for (size_t i = 0; i < word.length(); i++)
        {
            cout << underscore[i] << ' ';
        }
        cout << endl;

        cout << "Введите букву: ";
        cin >> letter;
        system("cls");

        int count = checking(letters1, word, letter, index, max_size);

        if (count > 0)
        {
            for (int i = 0; i < count; i++)
            {
                underscore[index[i]] = letter;
            }
        }
        else
        {
            number++;
            cout << "Неверная буква!" << endl;
            Human(number);
        }


        if (string(underscore) == word)
        {
            cout << "Поздравляем! Вы угадали слово!" << endl;
            break;
        }
    }

    if (number >= max_attempts)
    {
        cout << "Вы проиграли! Загаданное слово было: " << word << endl;
    }


    delete[] letters1;

    return 0;
}


