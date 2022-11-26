#include <iostream>

using namespace std;
int main()
{

    int sum = 0;
    int x;
    cout << "input bill = ";
    cin >> x;

    while (x != 9999)
    {
        cout << x << endl;
        sum = sum + x;
        cout << "input bill = ";
        cin >> x;
    }

    cout << "Jumlah angka = " << sum;

    return 0;
}
