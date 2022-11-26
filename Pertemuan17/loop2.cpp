#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 1)
        {
            continue;
        }
        else
        {
            cout << "Nilai Genap Adalah " << i << endl;
        }
    }

    return 0;
}