#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream fin("text.txt");  // вывод данных из файл
    ofstream fout("text.txt"); // ввод данных в файла
    string a;
    string b;
    float x, y;

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

    cout << "sled" << endl;

    while (getline(fin, b))
    {

        float c = stof(b);
        for (int i = 0; i < 5; i++)
        {

            c = c;
        }

        cout << c << endl;
    }

    fin.close(); // закрываем файл
}