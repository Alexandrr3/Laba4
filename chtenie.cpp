#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ifstream l("test.txt");
    ofstream f("test.txt");
    string a;
    string b;

    cin >> a;
    f << a;
    f.close();
    getline(l, b);

    cout << b << endl;

    l.close();
}