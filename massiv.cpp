#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int l;
int main()
{
    ifstream fin("file.txt");
    ofstream fout("file.txt");
    string b;
    float x, y;
    l = 0;
    for (int x = -4; x < 5; x++)
    {

        if (x >= -4 && x < 0)
            y = (-0.5 * x);
        else if (x >= 0 && x < 2)
            y = 2 - sqrt(4 - (pow(x, 2)));
        else if (x >= 2 && x < 4)
            y = sqrt(4 - pow(x - 2, 2));
        else if (x >= 4 && x <= 5)
            y = (-x + 4);
        if (x < -4 || x > 5)
            cout << "error";
        else
            cout << "Y=" << y;
        fout << y << endl;
    }

    fout.close();
    float *data = new float[l];
    l = 0;
    while (getline(fin, b))
    {
        data[l] = stof(b);
        l++;
    }
    for (int i = 0; i < l; i++)
        cout << data[i] << "\n";
    fin.close();
}