#include <iostream>
#include <windows.h>
#include<iomanip>
#include <locale>
#include <string>




void checking( char masiw, string word,char letter)
{
	int number = word.length();
    for (int i = 0; i < number; i++)
    {
            if (letter == masiw[i])
            {
                cout << letter << endl;
            }
        
    }

}