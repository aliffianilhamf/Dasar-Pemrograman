#include <iostream>

using namespace std;

int main()
{

    int i = 0, sum = 0, x;
    cout << "input bill : ";
    cin >> x;

    while (x != 9999)
    {
        cout << x << endl;
        sum = sum + x;
        i = i + 1;
        cout << "input bil : ";
        cin >> x;
    }
    cout << "Jumlah angka = " << sum << endl;
    cout << "Jumlah cacah angka = " << i << endl;
    return 0;
}