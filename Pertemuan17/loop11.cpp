#include <iostream>

using namespace std;

int main()
{
    int x, hasil;
    cout << "input : ";
    cin >> x;
    for (int i = 1; i <= 10; i++)
    {
        //  hasil = i * x;
        for (int j = x; j <= x; j++)
        {
            hasil = i * j;
            cout
                << i << " x " << /*x*/ j << " = " << hasil << endl;
        }
    }

    return 0;
}