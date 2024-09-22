#pragma once
#include <string>
using namespace std;

char* SplitWord(string word)
{

    int len = word.length();
    char* letters = new char[len];
    for (int i = 0; i < len; i++)
    {
        letters[i] = word[i];
    }
    return letters;
}

//void checking(char masiw, string word, char letter)
//{
//    int number = word.length();
//    for (int i = 0; i < number; i++)
//    {
//        if (letter == masiw[i])
//        {
//            cout << letter << endl;
//        }
//
//    }
//
//}
//h  e  l  l  o
//[[h],[e],[l],[l],[o]]

