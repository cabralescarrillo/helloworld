#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg{ "Hello Wold", "my name is Luis Alfredo Cabrales" };

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}