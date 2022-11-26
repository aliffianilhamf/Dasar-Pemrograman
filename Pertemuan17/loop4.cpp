#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int jumlah;
    float rata_rata;

    for (int i = 1; i <= 20; i++)
    {
        cout << i << endl;
        jumlah = jumlah + i;
        rata_rata = i;
    }
    cout << endl;
    cout << "Jumlah\t\t= " << jumlah << endl;
    cout << "Rata-rata\t= " << jumlah / rata_rata << endl;

    return 0;
}