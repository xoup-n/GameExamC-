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


int checking(char letters1[], string word, char letter)
{
    int quantity = 0;
    int number = word.length();
    for (int i = 0; i < number; i++)
    {
        if (letter == letters1[i])
        {
            cout << letter << endl;
            quantity++;
        }

    }
    return quantity;
}
