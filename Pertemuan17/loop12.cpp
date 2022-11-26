#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    cout << "---------------------------------" << endl;
    cout << "Celcius\t|\t Fahrenheit\t|" << endl;
    cout << "---------------------------------" << endl;
    for (float i = 0; i <= 100; i++)
    {
        float fahrenheit = (i * 9 / 5) + 32;
        cout << fixed << setprecision(0) << i << "\t:\t" << fixed << setprecision(1) << fahrenheit << "\t\t|" << endl;
    }
    cout << "---------------------------------" << endl;

    return 0;
}