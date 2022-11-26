#include <iostream>

using namespace std;

int main()
{

    int x, i = 0;
    cout << "Input bil : ";
    cin >> x;

    while (x != 9999)
    {
        cout << x << endl;
        i = i + 1;
        cout << "Input bil : ";
        cin >> x;
    }

    cout << "Jumlah Cacah Angka = " << i << endl;

    return 0;
}