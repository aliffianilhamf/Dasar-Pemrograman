#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float celcius[9] = {100, 40, 37, 30, 21, 10, 0, -18, -40};
    float fahrenheit;
    string ket[9] = {
        "Air Mendidih",
        "Air Mandi Panas",
        "Temperatur Tubuh",
        "Cuaca Pantai",
        "Temperatur Ruangan",
        "Hari Yang Dingin",
        "Titik Beku Air",
        "Cuaca Dingin Bersalju",
        "Cuaca Sangat Dingin Bersalju"

    };

    cout << "-------------------------------------------------------------------------" << endl;
    cout << "Celcius\t|\t Fahrenheit\t|\t\t Keterangan\t\t|" << endl;
    cout << "-------------------------------------------------------------------------" << endl;
    for (int i = 0; i <= 8; i++)
    {
        fahrenheit = (celcius[i] * 9 / 5) + 32;
        cout << fixed << setprecision(0) << celcius[i] << "\t:\t";
        cout << fixed << setprecision(1) << fahrenheit << "\t\t|";

        if (i == 0 || i == 3)
        {
            cout << " " << ket[i] << "\t\t\t\t|" << endl;
        }
        else if (i == 8)
        {
            cout << " " << ket[i] << "\t\t|" << endl;
        }
        else
        {
            cout << " " << ket[i] << "\t\t\t|" << endl;
        }
    }
    cout << "-------------------------------------------------------------------------" << endl;

    return 0;
}