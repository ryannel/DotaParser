#include <iostream>
#include <vector>
#include <string>
#include "../2-Core/namePrinter.h"

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code!"};

    NamePrinter obj; 
    obj.printname("boo");

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}   