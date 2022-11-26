#include <iostream>

using namespace std;

int main()
{
    int input, i;
    cout << "Program Ini Akan Berhenti Jika Anda Menginputkan -99"
         << "\n"
         << endl;
    cout << "Masukkan Nilai Anda : ";
    cin >> input;

    for (;; input != -99)
    {
        cout << "Masukkan Nilai Anda : ";
        cin >> input;

        if (input == -99)
        {
            break;
        }
    }
    cout << "\nKeluar Karena Break\n"
         << endl;

    return 0;
}